#include <stdio.h>

int main() {
    char str[1];
    int target = 999; // A completely separate variable

    printf("Before overwrite, target = %d\n", target);

    str[0] = 'a';
    str[1] = 'p'; // Writing over neighboring memory
    str[2] = 'q';
    str[3] = 'r';

    printf("After overwrite, target = %d\n", target); 
    return 0;
}
