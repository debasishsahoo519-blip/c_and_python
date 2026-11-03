import math
def check_pandigital(st,n):
    new_set=set(st)
    sum=0
    
    
    if len(new_set)==9:
        for ch in st:
            sum+=int(ch)
        if sum==45:
            return 1
    return 0
d=0
div=0
sum=0

for i in range(1000,10000):
    for j in range(1,10):
        if i%j!=0:
            continue
        div=i//j
        d=int(math.log10(div))+1
        if(d!=4):
            continue
        s=str(div)+str(i)+str(j)
        check=check_pandigital(s,d)
        if check==1:
            sum+=i
            break
    for k in range(10,100):
        if i%k!=0:
            continue
        div=i//k
        d=int(math.log10(div))+1
        if(d!=3):
            continue
        s=str(div)+str(i)+str(k)
        check=check_pandigital(s,d)
        if check==1:
            sum+=i
            break
print(sum)
