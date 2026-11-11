def count_distinct_prime_factors(n):
    count = 0
    i = 2
    
    # Check up to sqrt(n)
    while i * i <= n:
        if n % i == 0:
            count += 1
            # Remove all occurrences of this prime factor
            while n % i == 0:
                n //= i
        i += 1
        
    # If n > 1, the remaining n is a prime factor greater than sqrt(original n)
    if n > 1:
        count += 1
        
    return count
i=210
while True:
    if count_distinct_prime_factors(i+3)!=4:
        i+=4
        continue
    if count_distinct_prime_factors(i+2)!=4:
        i+=3
        continue
    if count_distinct_prime_factors(i+1)!=4:
        i+=2
        continue
    if count_distinct_prime_factors(i)!=4:
        i+=1
        continue
    print(i)
    break