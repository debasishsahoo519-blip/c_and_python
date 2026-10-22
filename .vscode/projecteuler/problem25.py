a=1
b=1
i=3
sum=0
s=""
while True:
    sum=a+b
    if len(str(sum))==1000:
        print(i)
        break
    i=i+1
    a=b
    b=sum