# def factorial(n):
    
#     if n == 0 or n == 1:
#         return 1
#     else:
#         return n * factorial(n - 1)
# print(factorial(5))  
# ar=[0,1]
# def fibonacci(a,b,n):
#     sum=a+b
#     a,b=b,sum
#     ar.append(sum)
#     if(n==3):
#         return ar
#     else:
#         return fibonacci(a,b,n-1)
# m=int(input("enter number of terms"))
# ar2=fibonacci(0,1,m)
# # for i in ar2:
# #     print(i,end=",")
# print(*ar2,sep=",")


# def digitsum(n):
#     if(n==0):
#         return 0
#     digit=n%10
    
#     return digit+digitsum(n//10)
# print(digitsum(123))

# def power(x,y):
#     if y==0:
#         return 1
#     return x*power(x,y-1)
# print(power(2.5,2))

def revstring(str):
    if len(str)==0:
        return ""
    ch=str[0]
    return revstring(str[1:])+ch
print(revstring("debasish"))