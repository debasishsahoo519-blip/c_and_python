#include <stdio.h>
#include <string.h>
int main() {
    printf("enter username");
    char str[20];
    scanf("%20s",&str);
    int len=strlen(str);
    if (len>=5){
        if (str[0]=='u'|| str[0]=='U'){
            printf("hello %s",str);
        }else{
            printf("invalid username");
        }
    }else{
        printf("usernmae too short");
    } 
    

    return 0;
}