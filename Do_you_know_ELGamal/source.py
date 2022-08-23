from Crypto.Random import random
from Crypto.Util.number import bytes_to_long


FLAG = b"pwned{kn0w_y0ur_e1g4m4l_plaintext}"

class Challenge():
    def __init__(self):
       self.q = 12600908927583695025915922760858062869504898731692176260536498123355811076649093419400976600871355970813118607850398283879552845362863097769033273386072687
       self.g = 6376134701041263881538692443881627157067668610080003727492498791102569951797
       self.x = random.randint(2, self.q)
       self.h = pow(self.g, self.x, self.q)

    def encrypt(self,m):
       s = pow(self.h, self.x, self.q)
       c1 = pow(self.g, self.x, self.q)
       c2 = (s * m) % self.q
       return (c1, c2)

    def challenge(self, your_input):
        if your_input['option'] == 'get_encrypted_text':
            rm = int(your_input['msg'],16)
            c1,c2 = self.encrypt(rm)
            return {"ciphertext" : (hex(c1),hex(c2))}

        elif your_input['option'] == 'get_flag':
            c1,c2 = self.encrypt(bytes_to_long(FLAG))
            return {"ciphertext" : (hex(c1),hex(c2))}

        elif your_input['option'] == 'get_public_key':
            return {"public_key" : self.h }

        else:
            return {"msg" : "valid option not found"}



if __name__ == '__main__':
    chal = Challenge()
    c1, c2 = chal.encrypt(bytes_to_long(FLAG))
    print(f'Ciphertext: ({hex(c1)}, {hex(c2)})')
    print(f'Public key: {chal.h}')
    msg = input('Enter text to input: ')
    rm = int(msg, 16)
    c_1,c_2 = chal.encrypt(rm)
    print(f'Ciphertext: ({hex(c_1)}, {hex(c_2)})')
