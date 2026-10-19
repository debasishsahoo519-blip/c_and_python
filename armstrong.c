#include <stdio.h>
#include "../myfunctions/my_functions.h"
void checkarmstrong(int num) {
    int originalNum, remainder, result = 0;
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}
void armstrongrange(void){
    int i=1;
    int ndigits;
    int temp1,temp2;
    int sum=0;
    while(i<=100000000000000){
        temp1=i;
        ndigits=0;
        while(temp1!=0){
            temp1/=10;
            ndigits++;
        }
        temp2=i;
        sum=0;
        while(temp2!=0){
            sum+=ipow(temp2%10,ndigits);
            temp2/=10;
        }
        if(sum==i){
            printf("%d is an Armstrong number.\n", i);
        }
        i++;
    }
}
int main() {
    int num;
    printf("Enter an integer: ");       
    scanf("%d", &num);
    checkarmstrong(num);
    armstrongrange();
    return 0;
}
