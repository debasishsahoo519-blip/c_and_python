import itertools
def pandigital_numbers():
    s="0123456789"
    lst=[]
    for p in itertools.permutations(s):
        lst.append("".join(p))
    return lst

sum=0
list=pandigital_numbers()
for s in list:
    if int(s[1:4])%2==0 and int(s[2:5])%3==0 and int(s[3:6])%5==0 and int(s[4:7])%7==0 and int(s[5:8])%11==0 and int(s[6:9])%13==0 and int(s[7:10])%17==0:
        sum+=int(s)
print(sum)