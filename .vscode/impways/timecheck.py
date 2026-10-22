import timeit
import math
n=int(input("ennter a number"))

def test_log():
    return int(math.log10(n))+1
def test_str_method():
    return len(str(n))
def test_loop_method():
    ctr=0
    temp=n
    while(temp!=0):
        ctr=ctr+1
        temp/=10
    return ctr

time_log=timeit.timeit(test_log,number=100000)
time_str=timeit.timeit(test_str_method,number=100000)
time_loop=timeit.timeit(test_loop_method,number=100000)
print(time_log)
print(time_str)
print(time_loop)