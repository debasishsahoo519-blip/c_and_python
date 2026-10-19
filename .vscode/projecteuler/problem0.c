#include <stdio.h>

int main() {
    long long sum = 0;
    long long count = 0;
    long long i = 1;

    while (i < 997000) {
        if (i % 2 != 0) {
            sum += i * i;
            
        }
        i++;
        
    }

    printf("\n%lld\n", sum);
    return 0;
}
