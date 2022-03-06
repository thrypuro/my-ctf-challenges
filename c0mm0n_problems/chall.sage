from Crypto.Util.number import *
# Edwards curve code are snipped parts of it from CryptoHack (edwards goes degenerate)
class Edwards():
  
    def __init__(self, n,d):
        self.n = int(n)
        self.d = d


    # complete point addition formulas
    def add(self, P1, P2):
        x1, y1 = P1
        x2, y2 = P2
        
        C = x1*x2 % self.n
        D = y1*y2 % self.n
        E = self.d*C*D
        x3 = (x1*y2+y1*x2) % self.n
        y3 = (D - C) % self.n
        z31 = 1 - E % self.n
        z32 = 1 + E % self.n
        z3inv = pow(z31, -1,self.n)
        z3inv2 = pow(z32, -1,self.n)
        
        return (x3*z3inv2 % self.n, y3*z3inv % self.n)

    # left-to-right double-and-add
    def single_mul(self, e, P): 
        e = int(e)%(self.n)
        t = int(e).bit_length()
        if n == 0:
            return (0,1)
        R = P
        for i in range(t-2,-1,-1):
            bit = (e >> i) & 1
            R = self.add(R, R)
            if bit == 1:
                R = self.add(R, P)
        return (R[0], R[1])
m = b'??????????????????????????????????????????????'
m = bytes_to_long(m)
p = getPrime(512)
q = getPrime(512)
n = p*q
e = 65537
print(f"n = {n}")
print()
c1 = pow(m,e,n)
print(f"ciphertext = {c1}")
print()
y23 = randint(0, n-1)
d= (m^2+y23^2-1)*pow(m^2*y23^2,-1,n)
print(f"d = {d}")
print()
E = Edwards(n,d)
qx,qy=E.single_mul(2,(m,y23))
print(f"2*P = {qx,qy}")