from Crypto.Util.number import getPrime,bytes_to_long
p1 = []
FLAG = b"pwned{?????????????????????????????????????}"
for i in range(7): 
 p1.append(getPrime(250))
N = 1
phi = 1
for i in p1:
    N*=i
    phi *= (i-1)
p = max(p1)
q = min(p1)
n = p*q
e = 65537
c = pow(bytes_to_long(FLAG),e,n)
print("Cipher-text: "+ str(c))
print("N :" +str(N))
print("Phi(N) :" + str(phi))
