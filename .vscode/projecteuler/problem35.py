def check_prime(n):
    count=0
    m=int(n)

    for i in range(2,m):
        if i*i>m:
            break
        if m%i==0:
            count=-1
            break
    if count==0:
        return 0
    if count==-1:
        return -1
    


s=""
l=0
ctr=0
st=""
check=0

for i in range(2,1000000):
    s=str(i)+str(i)
    l=len(str(i))
    for j in range(0,l):
        st=s[j:j+l]
        if check_prime(st)==-1:
            check=-67
            break
        check=0
    if check==0:
        ctr+=1
print(ctr)