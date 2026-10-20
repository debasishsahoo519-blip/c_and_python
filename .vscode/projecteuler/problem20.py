def fact(n):
    pro=1
    for i in range(1,n+1):
        pro*=i
    return pro
result=fact(100)
s=str(result)
sum=0
for ch in s:
    sum+=int(ch)
print(sum)