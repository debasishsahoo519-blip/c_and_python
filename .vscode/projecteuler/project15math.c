#include <stdio.h>

int main() {
    long long pro = 1;
    
    for (int i = 1; i <= 20; i++) {
        pro = pro * (20 + i) / i;
    }
    
    printf("%lld\n", pro);
    return 0;
}
