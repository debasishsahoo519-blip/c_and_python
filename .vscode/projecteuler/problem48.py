x = 1
for i in range(1, 11):
    x *= 10

rem = 1
sum_val = 0 

for i in range(1, 1001):
    rem = 1
    for j in range(1, i + 1):
        rem = (rem * i) % x
    sum_val += rem

print(sum_val%x)