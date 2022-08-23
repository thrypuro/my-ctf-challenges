from Crypto.Util.number import getPrime, bytes_to_long,isPrime
from Crypto.Cipher import AES
import hashlib
from Crypto.Util.Padding import pad, unpad
import os
from Crypto.Random import random
FLAG = b"pwned{??????????????????????????????????????????}"

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

p = 19229145870088075014403623975060757589716249223554663628168296741814268469211694546843483587922920218834949200488273773205881041721942804141067553488198194692097
g = 18415924950971272761639778751751270578182653255072791785756476292148449524995630202203368065177932660885062371526736884647001190150456247942797970663647206436410
secret = random.randint(2**513, p)
a = pow(g,secret,p)
c = encrypt_flag(secret)
print(f"Public key : {a}")
print(f"Encrypted flag : {c}")
