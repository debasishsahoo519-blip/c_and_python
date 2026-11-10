def is_pentagonal(m):
    a=((1+24*m)**0.5+1)/6
    b=a-int(a)
    if b==0:
        return True
    return False
lst=[]
n=1
a=1
check=1
while True:
    a=n*(3*n-1)/2
    for i in lst:
        if is_pentagonal(a-i) and is_pentagonal(a+i):
            print(a-i)
            print(a)
            print(i)
            check=0
            break
    if check==0:
        break
    lst.append(a)
    n+=1
