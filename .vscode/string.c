#include <stdio.h>

int main() {
   char str[100];
   printf("Enter a string: ");
   int length =0;
   fgets(str,100,stdin);
   while(str[length]!='\0'&& str[length]!='\n'){
    length++;
   }
   printf("the length of string is %d",length);

    return 0;
}