import math


num=[]
denom=[]

div=0
pro1=1
pro2=1
ctr=0

for a in range(10,100):
    if(a%10==0):
        continue
    for b in range(a+1,100):
        if(b%10==0):
            continue
        div=a/b
        pro1=(a%10)*(a//10)
        pro2=(b%10)*(b//10)
        if div==pro1/pro2:
            if(a%10==b//10) or (a//10==b%10) or (a%10==b%10) or (a//10==b//10):
                
                 num.append(a)
                 denom.append(b)
            continue

pronum=1
prodenom=1
for i in range(4):
    pronum*=num[i]
    prodenom*=denom[i]
print(prodenom//math.gcd(pronum,prodenom))
print(num)
print(denom)