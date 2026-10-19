#include <stdio.h>

int main() {
    long credit=0;
    printf("enter ur credit number");
    scanf("%ld", &credit);
    int ctr=0;
    int sec=0;
    int rest=0;
    int digit=0;
    long num=credit;
    while(num>0){
        ctr++;
        digit=num%10;
        if(ctr%2==0){
            sec+=digit;

        }else{
            rest+=digit;
        }
        num/=10;
    }
    int f= num/10000000000000;
    if((rest+sec)%10==0){
        if(ctr==15&&num/(10000000000000==34||num/10000000000000==37)){
            printf("amex");
        }else if(ctr==16){
            if(f==51||f==52||f==53||f==54||f==55){
                printf("mastercard");}
        }else if(ctr==13||ctr==16){
            if(f==4){
                printf("visa");
            }

    }else{
        printf("invalid credit");
    }

 
    return 0;
    }else{
        printf("invalid credit");
    }
}
