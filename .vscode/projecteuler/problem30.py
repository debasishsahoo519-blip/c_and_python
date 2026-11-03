

sum=0
temp=0
sum2=0
for i in range(2,10000000):
    temp=i
    sum=0
    while(temp!=0):
        sum+=(temp%10)**5
        temp//=10
    if(sum==i):
        sum2+=sum
print(sum2)