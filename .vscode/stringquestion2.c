#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("enter a string");
    fgets(str,100,stdin);
    int length=strlen(str);
    char str2[100];

    for(int i =0;i<length;i++){
        str2[i]=str[length-i-1];
    }
    printf("\n %s",str2);
    return 0;
}