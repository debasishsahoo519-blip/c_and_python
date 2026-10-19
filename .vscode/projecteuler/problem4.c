#include <stdio.h>
int palindrome(int n){
    int temp=n;
    int digit=0;
    int rev=0;
    while(temp!=0){
        digit=temp%10;
        rev=rev*10+digit;
        temp/=10;
    }
    if(rev==n){
        return 1;
    }
    return 0;
}
int main() {
    int pro=1;
    int promax=0;
    for(int i=100;i<=999;i++){
        for(int j=100;j<=999;j++){
            pro=i*j;
            if((pro>promax)&&(palindrome(pro)==1)){
                promax=pro;
            }
        }
    }
    printf("\n %d",promax);
    return 0;
}