#include <stdio.h>
#include <time.h>
#include <math.h>

int ipow(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    const int N = 50000000;
    clock_t start, end;
    double t1, t2;
    double s = 0.0;

    start = clock();
    for (int i = 0; i < N; i++) {
        s += pow(2.0, 10.0);
    }
    end = clock();
    t1 = (double)(end - start) / CLOCKS_PER_SEC;

    start = clock();
    for (int i = 0; i < N; i++) {
        s += ipow(2, 10);
    }
    end = clock();
    t2 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("pow: %.6f s\n", t1);
    printf("ipow: %.6f s\n", t2);
    printf("s=%f\n", s);
    return 0;
}
