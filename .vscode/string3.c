#include <stdio.h>
#include <string.h>

int main() {
    char target[] = "SAFE";
    char a[] = "I love her"; // 11 bytes allocated
    char b[] = "so much";

    printf("Before strcat, target is: %s\n", target);
    
    strcat(a, b); // Overflows into surrounding memory
    
    printf("After strcat, target is now: %s\n", target); 
    // Depending on stack alignment, 'target' will likely change or be corrupted!
    
    return 0;
}
