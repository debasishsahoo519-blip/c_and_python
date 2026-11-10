import itertools
def generate_pandigital_numbers(n):
    digits=""
    for i in range(1, n + 1):
        digits += str(i)
    pandigital_numbers = []
    for perm in itertools.permutations(digits):
        pandigital_numbers.append(int(''.join(perm)))
    return pandigital_numbers
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True


check=0
for i in range(9, 0, -1):
    pandigital_numbers = generate_pandigital_numbers(i)
    for num in pandigital_numbers[::-1]:  # Iterate in reverse order to check larger numbers first
        if is_prime(num):
            print(num)
            check=-1
            break  # Exit the loop once the largest prime is found
    if check==-1:
            break  # Exit the outer loop if a prime has been found