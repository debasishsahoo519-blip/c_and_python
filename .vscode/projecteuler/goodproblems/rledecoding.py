str1=input("enter a string: ")
str2=""
ctr=1
i=0
while i<len(str1):
    
    if(i<len(str1)-1):
        if str1[i]==str1[i+1]:
                while(True):
                    ctr=ctr+1
                    i=i+1
                    if( i+1>=len(
                        (str1))):
                        break
                    if(str1[i]==str1[i+1] ):
                        continue
                    else:
                        break
    
    if(ctr==1):
        str2=str2+str1[i]
        ctr=1
        
    else:
        str2=str2+str1[i]+str(ctr) 
        ctr=1
    i=i+1
print(str2)