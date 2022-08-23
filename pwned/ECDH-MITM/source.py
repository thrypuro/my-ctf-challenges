from collections import namedtuple
from Crypto.Util.number import inverse, bytes_to_long
from Crypto.Random import random
import hashlib
import os
from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
# Create a simple Point class to represent the affine points.
Point = namedtuple("Point", "x y")

# The point at infinity (origin for the group law).
O = 'Origin'

FLAG = b"pwned{1_$ee_y0u_underst4nd_y0ur_e11iptic_curve$}"

class Challenge():
    def __init__(self):
        self.beforeinput = "You have intercepted a conversation b/w ZE Alice and AC Bob.You get to change one value. options : \n 1) Parameters (for curve parameters) \n 2) Intercept (insert b value of the curve) \n 3)Exit \n"
        self.p = 24849981068161011192221348061718398478209730886064747563146652780077769880877285658171
        self.a = 64186688762130075872648727143532923412208390610536286437268423112
        self.gx = 556494415548254347167125753280396229882316804522392181045682244251096409504346391345
        print(self.beforeinput)
       
    # this algorithm has been taken from Cryptohack, so huge thanks to them :) Best crypto site
        
    
    def point_inverse(self,P):
     if P == O:
        return P
     return Point(P.x, -P.y % self.p)
 
    def point_addition(self,P: tuple, Q: tuple):
    # based of algo. in ICM
      if P == O:
        return Q
      elif Q == O:
        return P
      elif Q == self.point_inverse(P):
        return O
      else:
        if P == Q:
            lam = (3*P.x**2 + self.a)*inverse(2*P.y, self.p)
            lam %= self.p
        else:
            lam = (Q.y - P.y) * inverse((Q.x - P.x), self.p)
            lam %= self.p
      Rx = (lam**2 - P.x - Q.x) % self.p
      Ry = (lam*(P.x - Rx) - P.y) % self.p
      R = Point(Rx, Ry)

      return R
 
    def double_and_add(self,P: tuple, n: int):
    # based of algo. in ICM
     Q = P
     R = O
     while n > 0:
        if n % 2 == 1:
            R = self.point_addition(R, Q)
        Q = self.point_addition(Q, Q)
        n = n // 2
  
     return R
 
    def gen_shared_secret(self,Q: tuple, n: int):
     # Bob's Public key, my secret int
     S = self.double_and_add(Q, n)
     return S.x


    def encrypt_flag(self,shared_secret: int):
     # Derive AES key from shared secret
     sha1 = hashlib.sha1()
     sha1.update(str(shared_secret).encode('ascii'))
     key = sha1.digest()[:16]
     # Encrypt flag
     iv = os.urandom(16)
     cipher = AES.new(key, AES.MODE_CBC, iv)
     ciphertext = cipher.encrypt(pad(FLAG, 16))
     # Prepare data to send
     data = {}
     data['iv'] = iv.hex()
     data['encrypted_flag'] = ciphertext.hex()
     return data
    def send_curvepara(self):
        return {"prime": hex(self.p) , "a" : hex(self.a) , "Generator-x":hex(self.gx)}
     
    def challenge(self, your_input):
         if "Parameters" not in your_input["option"] and "Intercept" not in your_input["option"]:
             return{"error" : "Please enter a valid option." }
         
         if "Parameters" in your_input["option"]:
              return self.send_curvepara()
         
         if "Intercept" in your_input["option"]:
            if "b" not in your_input:
                return {"error" : "You must intercept the b value"}
            b = int(your_input["b"],16)
            gy = (pow(self.gx,3,self.p)+self.a*self.gx+b)%self.p
            gy = pow(gy,(self.p+1)//4,self.p)
            G = Point(self.gx,gy)
            na = random.randint(1, self.p)
            nb = random.randint(1, self.p)
            A = self.double_and_add(G, na)
            B = self.double_and_add(G, nb)
            shared_secret = self.gen_shared_secret(B,na)
            data = self.encrypt_flag(shared_secret)
            return {"Alice public key" : A, "Bob public key": B, "Generator" : G, "encrypted" : data }

if __name__ == '__main__':        
 C = Challenge()
 while True:
  op = input("Enter your option:  \n")
  if "Exit" in op:
      break
  if "Intercept" in op:
   b = input("Enter the b value: \n")
   a = {"option" : op , "b" : hex(int(b))}
  else:
     a = {"option" : op}
  print(C.challenge(a))
