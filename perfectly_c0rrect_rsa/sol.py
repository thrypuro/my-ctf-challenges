"""
The ways ik to solve this chall
AMM algoritm and use crt 
reference:
https://blog.soreatu.com/posts/intended-solution-to-crypto-problems-in-nctf-2019/#easyrsa909pt-2solvers
and 
https://eprint.iacr.org/2020/1059.pdf
of this paper :)
also probably 
https://crypto.stackexchange.com/questions/81949/how-to-compute-m-value-from-rsa-if-phin-is-not-relative-prime-with-the-e/81966#81966

"""
from Crypto.Util.number import *
c = 194186516353725635893223797231621259449401879863371122992551811855573257121740630993813847863192405635178789086158088709
e1 = e//11
p = 327414555693498015751146303749141488063642403240171463406883
q = 693342667110830181197325401899700641361965863127336680673013
phi = (p-1)*(q-1)
c0 = pow(c,pow(11,-1,phi),n)
d0 = pow(e1,-1,phi//e1)
ge =pow(2,phi//e1,n)
a0 = pow(c0,d0,n)

for i in range(e1):
    a0 = (a0*ge)%n
    a1 = long_to_bytes(a0)
    if b"pwned{" in a1:
        print("sucess", a1)
   
