from Crypto.Util.number import getPrime, bytes_to_long,isPrime
from Crypto.Cipher import AES
import hashlib
from Crypto.Util.Padding import pad, unpad
from secrets import FLAG
def make_matrix(l,c):
	assert len(l) % c == 0
	A = [l[i:i+c] for i in range(0,len(l),c)]
	return A
def get_generators(k):
 g = []
 for i in range(k):
  g1 = getPrime(50)
  g.append(g1)
 return g
def encrypt_flag(shared_secret: int):
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
def gen_shared_secret(M,k):
    return (M^k)[0][0]
def gen_matrix_key_pair(G,p):
    k = ZZ.random_element(1,p-1)
    B = G^k
    return B,k
def get_base_matrix(g,mi,mj): 
 # Oh, i forgot that only square matrices are invertible, here's an easy fix to make sure my client doesnt do that
 p = g[-1]
 if mi >mj: 
      mj = mi
 else:
     mi = mj
 A = []
 for i in range(mi):
    A.append([])
    for j in range(mj):

        if i ==j and i<len(g):
            A[i].append(g[i])
        elif i==j and i>=len(g):
            A[i].append(p)
        elif i==j-1:
            A[i].append(ZZ.random_element(1,p-1))
        else:
            A[i].append(0)   
 return A
p = getPrime(150)
F = GF(p)
print(F)
g = get_generators(4)
G = get_base_matrix(g,4,5) # 5x5 matrix
print(f"Generator Matrix :{G}")
G = matrix(F,G)
aM,na = gen_matrix_key_pair(G,p)
bM,nb = gen_matrix_key_pair(G,p)
print(f"Alice Matrix : {make_matrix(aM.list(),5)}") 
print(f"Bob Matrix : {make_matrix(bM.list(),5)}")
shared_secret = gen_shared_secret(aM,nb)
encrypted_flag = encrypt_flag(shared_secret)
print(f"Alice sends encrypted_flag: {encrypted_flag}")