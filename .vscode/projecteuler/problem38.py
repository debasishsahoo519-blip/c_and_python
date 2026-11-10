def checkpandigital(a):
   new_set=set(a)
   sum=0
   if len(new_set)==9:
        for ch in a:
           sum+=int(ch)
        if sum==45:
           return True
       
   return False
       


lst=[]
str1=""
str2=""
for i in range(5000,10000):
    str1=str(i)+str(i*2)
    if checkpandigital(str1):
        lst.append(int(str1))
for i in range(100,333):
    str2=str(i)+str(i*2)+str(i*3)
    if checkpandigital(str2):
        lst.append(int(str2))
for i in range(25,33):
    str2=str(i)+str(i*2)+str(i*3)+str(i*4)
    if checkpandigital(str2):
         lst.append(int(str2))
lst.append(918723645)
max=0
for i in lst:
    if i>max:
        max=i
print(max)




