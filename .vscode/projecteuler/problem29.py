
import timeit
def solution():
    s=set()
    for a in range(2,101):
        for b in range(2,101):
            s.add(a**b)
t=timeit.timeit(solution,number=1000)
print(t)