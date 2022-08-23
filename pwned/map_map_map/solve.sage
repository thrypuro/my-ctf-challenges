# Exploit 
P =  (64089257633329301500079622406376747145166554145260765436443232178281114657004, 58311837647524869568524997324391776133231234563293699372796843539239657065674)

k = 60
e1 =  616818383939397262657751101724


F= GF(p)
R.<x,y> = PolynomialRing(F)
f = y^2-x^3-3*1*a*(x+1)^2 # figure this out with some googling :D
Ei = EllipticCurve(f)
G= Ei(G)
P = Ei(P)
t =k

for i in range(t-2,-1,-1):
    P = P - e1*3*G

A = P
order = G.order()
max_val = 1<<k
subresults = []
factors = []
modulus = 1
for prime, exponent in factor(order):
    if modulus >= max_val: break
    _factor = prime ** exponent
    factors.append(_factor)
    G2 = G*(order//_factor)
    A2 = A*(order//_factor)
    subresults.append(discrete_log_lambda(A2, G2, (0,_factor), '+'))
    modulus *= _factor

print(crt(subresults,factors))