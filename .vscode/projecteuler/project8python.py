import sys
sys.set_int_max_str_digits(10000)

def main():
    n = int(input("enter the number: "))
    m = int(input("enter the number of digits u want to check: "))
   
    ndigits = 0
    temp = n
    
    while temp != 0:
        ndigits += 1
        temp //= 10
        
    if m > ndigits:
        print("not possible")
        return 0
        
    temp = n
    ar = [0] * ndigits
    
    for i in range(ndigits):
        if temp == 0:
            break
        ar[i] = temp % 10
        temp = temp // 10
        
    pro = 1
    promax = 1
    numbermade = [0] * m
    ctr = 0
    
    for i in range(ndigits - m + 1):
        pro = 1
        for j in range(i, m + i):
            pro *= ar[j]

        if pro > promax:
            promax = pro
            ctr = 0
            for j in range(i, m + i):
                numbermade[ctr] = ar[j]
                ctr += 1

    print("\n")
    print(promax)
    
    for i in range(m - 1, -1, -1):
        print(numbermade[i], end="")
    print()

if __name__ == "__main__":
    main()
