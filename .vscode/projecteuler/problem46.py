def isprime(n):
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True
def is_square(n):
    if n<0:
        return False
    a=int(n**0.5)
    if a*a==n:
        return True
    return False









n=9
check=1

while True:
    check=1
    if isprime(n):
        n+=2
        continue
    for i in range(3,n,2):
        if isprime(i):
            if is_square((n-i)/2):
                check=0
                break
    if check==1:
        print(n)
        break
    n+=2