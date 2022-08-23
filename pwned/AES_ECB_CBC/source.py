from Crypto.Cipher import AES
from Crypto.Util.Padding import pad, unpad
from Crypto.Random import random
from Crypto.Util.number import bytes_to_long
KEY = b"bababobobababobo"
FLAG = b"pwnEd{d1ffer3nt_m0d3$_0f_A3$_111}"

class Challenge():
    def __init__(self):
        self.beforeinput = "Send your input and recognise which mode of AES encryption it is for a certain number of time and then get the flag"
        print(self.beforeinput)
    def ecbencrypt(self,plaintext):
        plaintext = bytes.fromhex(plaintext)
        plaintext = pad(plaintext,16)
        cipher = AES.new(KEY, AES.MODE_ECB)
        encrypted = cipher.encrypt(plaintext)
        return encrypted.hex()
    def cbcencrypt(self,plaintext):
        plaintext = bytes.fromhex(plaintext)
        plaintext = pad(plaintext,16)
        cipher = AES.new(KEY, AES.MODE_CBC)
        encrypted = cipher.encrypt(plaintext)
        return encrypted.hex()
    
    def challenge(self,plaintext):
        choice = random.randint(0, 1)
        if choice:
            a = self.ecbencrypt(plaintext)
        else:
            a = self.cbcencrypt(plaintext)
        return {"cipertext " : a},choice
    
if __name__ == '__main__':        
 C = Challenge()
 k = 0
 while True:
     plain = input("Enter your plaintext \n")
     plain = hex(bytes_to_long(plain.encode()))[2:].zfill(len(plain)*2)
     cipher,b = C.challenge(plain)
     print(cipher)
     choice = input("Input 1 for ECB and 0a for CBC \n")
     if int(choice) ==b:
         k+=1
         print(str(k)+" consecutive guesses!")        
     else:
         print("Wrong, too bad, will have to reset your counter now")
         k = 0
     
     if k==len(FLAG):
         print(f"Good job, you know your AES modes, here's the FLAG as the reward :)) : {FLAG}")
         break
    