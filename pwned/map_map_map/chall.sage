from Crypto.Util.number import *
from Crypto.Cipher import AES
import hashlib
from Crypto.Util.Padding import pad, unpad
import os
from Crypto.Random import random
flag = b"???????????????????????????"
class Curve():
    
    def __init__(self,p,a):
        self.p =p 
        self.a = a
        self.F = GF(p)
        
    def doubling(self,P1,P2):
        a  = self.a
        F = self.F
        ux1,uy1 = F(P1[0]),F(P1[1])
        ux2,uy2 = F(P2[0]),F(P2[1])

        ua = a
        ux3 = (((9)/((4)*uy1^2)*ux1^4+(9)/uy1^2*ua*ux1^3+((9)/uy1^2*ua^2+(9)/uy1^2*ua)*ux1^2+((18)/uy1^2*ua^2-(2))*ux1+((9)/uy1^2*ua^2-(3)*ua)))
        uy3 = ((-(27)/((8)*uy1^3)*ux1^6-(81)/((4)*uy1^3)*ua*ux1^5+(-(81)/((2)*uy1^3)*ua^2-(81)/((4)*uy1^3)*ua)*ux1^4+(-(27)/uy1^3*ua^3-(81)/uy1^3*ua^2+(9)/((2)*uy1))*ux1^3+(-(81)/uy1^3*ua^3-(81)/((2)*uy1^3)*ua^2+(27)/((2)*uy1)*ua)*ux1^2+(-(81)/uy1^3*ua^3+(9)/uy1*ua^2+(9)/uy1*ua)*ux1+(-(27)/uy1^3*ua^3+(9)/uy1*ua^2-uy1)))

        return (ux3,uy3)
        
    def add(self,P1,P2):
        if P1==P2:
            return self.doubling(P1,P2)
        a  = self.a
        F = self.F
        ux1,uy1 = F(P1[0]),F(P1[1])
        ux2,uy2 = F(P2[0]),F(P2[1])

        ua = a

        ux3 = (((-ux1^3+(ux2-(3)*ua)*ux1^2+(ux2^2+(6)*ua*ux2)*ux1+(uy1^2-(2)*uy2*uy1+(-ux2^3-(3)*ua*ux2^2+uy2^2)))/(ux1^2-(2)*ux2*ux1+ux2^2)))
        uy3 = ((((-uy1+(2)*uy2)*ux1^3+(-(3)*ua*uy1+(-(3)*uy2*ux2+(3)*ua*uy2))*ux1^2+(((3)*ux2^2+(6)*ua*ux2)*uy1-(6)*ua*uy2*ux2)*ux1+(uy1^3-(3)*uy2*uy1^2+(-(2)*ux2^3-(3)*ua*ux2^2+(3)*uy2^2)*uy1+(uy2*ux2^3+(3)*ua*uy2*ux2^2-uy2^3)))/(-ux1^3+(3)*ux2*ux1^2-(3)*ux2^2*ux1+ux2^3)))

        return (ux3,uy3)
    
    def map_to_im(self,R):
      x,y = R
      F= self.F
      u = F(x+4*a+12*a*F(x+1)/F(x^2))
      v =  F(y*(1-12*a*F(x+2)/F(x^3)))
      return (u,v)

    def map_to_t(self,R):
      x,y = R  
      F= self.F
      x,y = F(x),F(y)
      u = (x-12*a+(12*a*(4*a-9))/x-(4*a*(4*a-9)^2)/x^2)/F(3^2)
      v =y*(1-(12*a*(4*a-9))/x^2+(8*a*(4*a-9)^2)/x^3)/F(3^3)
      return (u,v)
    
   # left-to-right double-and-add
    def single_mul(self, e, P): 
        e = int(e)%(self.p) # a safety feature
        t = int(e).bit_length()
        if n == 0:
            return (0,1)
        R = P
        for i in range(t-2,-1,-1):
            bit = (e >> i) & 1
            R = self.add(R, R)
            if bit == 1:
                R = self.add(R, P)
                F= GF(p)
        Po.<x,y> = PolynomialRing(self.F)
        g = y^2-x^3+a*(3*x-4*a+9)^2
        Ei = EllipticCurve(g)
        e1 = randint(1,2^100)
        GG = (e1*Ei(self.map_to_im(P)))
        GG = (int(GG[0]),int(GG[1]))
        for i in range(t-2,-1,-1):            
            R = self.add(R,self.map_to_t(GG))
        print("e1 = ", e1)
        return (R[0], R[1]) 
def encrypt_flag(shared_secret: int):
    # Derive AES key from shared secret
    sha1 = hashlib.sha1()
    sha1.update(str(shared_secret).encode('ascii'))
    key = sha1.digest()[:16]
    # Encrypt flag
    iv = os.urandom(16)
    cipher = AES.new(key, AES.MODE_CBC, iv)
    ciphertext = cipher.encrypt(pad(flag, 16))
    # Prepare data to send
    data = {}
    data['iv'] = iv.hex()
    data['encrypted_flag'] = ciphertext.hex()
    return data

k = randint(0,3^2 * 7 * 11 * 17 * 37 * 1409 * 1609 * 726289)
p =100317395003625158184008449627635615132682328096712921597069236841396065480609
a = 75294190027155302298400061075012801513201146597309362018522140822382796326092
G = (81010040289619169255844858409085505608028889607703437503357428427173675726903,
 69378797657815259797402129060755906945783533212944659953763835320396383540505)
C=Curve(p,a)
P = C.single_mul(k,G)
print("k bits = ",k.bit_length())
print("P = ", P )
c = encrypt_flag(k)
print(f"Encrypted flag : {c}")