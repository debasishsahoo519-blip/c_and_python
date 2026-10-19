#include <stdio.h>
int main() {
    char ch[5] = {'h', 'e', 'l', 'l', 'o'};
    char bad_stuff[5] = {'B', 'A', 'D', '!', '!'};
    
   
    printf("Forced print: ");
    for(int i = 0; i < 10; i++) {
        putchar(ch[i]);
    }
    printf("hkadc");
    printf("\n");
    
    return 0;
}
