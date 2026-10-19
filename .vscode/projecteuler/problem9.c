#include <stdio.h>

int main() {
    int a, b, c;
    int ctr=0;
    int product=1;
    for(a=1;a<=1000;a++){
        for(b=1;b<=1000;b++){
            c=1000-a-b;
            if (c*c==a*a+b*b&&(c>=1)){
                printf("%d %d %d",a,b,c);
                product=a*b*c;
                printf("\n %d",product);

                ctr=1;
                break;
            }
        }
        if(ctr==1){
            break;
        }
        
    }
    return 0;
}