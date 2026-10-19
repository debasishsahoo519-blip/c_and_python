#include <stdio.h>
#include "my_functions.h" 

int ipow(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}