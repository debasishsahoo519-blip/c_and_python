#include <stdio.h>
#include <my_functions.h>
int kaprekarcheck(int temp){
    int temp2=temp;
    int sq2=temp*temp;
    int sq=temp*temp;
    int i=0;
    int left=sq;
    int right=0;
    int ctr=0;
    int x=0;
    if(sq<10){
        return 0;
    }
    while(left!=0){
        right+=left%10*ipow(10,i);
        left=(sq-right)/ipow(10,i+1);
        i++;
        if(right+left==temp){
            ctr++;
            break;
        }
    }
    x=(ctr==1)?1:0;
    return x;
}
void checkkaprekar(void){
    printf("enter a number");
    int n=0;
    scanf("%d",&n);
    int y=kaprekarcheck(n);
    if(y==1){
        printf("\nyes its kaprekar number");
    }
    else{
        printf("\nnot a kaprekar number");
    }
}
void kaprekarrange(void){
    int z=0;
    printf("enter a number\n");
    scanf("%d",&z);
    for(int j=1;j<=z;j++){
        if(kaprekarcheck(j)==1){
            printf("%d\n",j);
        }
    }
}
int main() {
    //kaprekar number is a number which is equal to square or somethong can br broken like 45=2025 20+25=45. note that 
    //the original is different i am using that it can be split from anywhere ,but i guess original defination is of right oart should be same length as nummber.
    //regardless our this program is far better .
    int choice=0;
    printf("enter 1 for checking, 2 for range to check of kaprekar numbers");
    scanf("%d",&choice);
    if(choice==1){
        checkkaprekar();
    }else if(choice==2){
        kaprekarrange();
    }else{
        printf("invalid input");
    }
    return 0;
}