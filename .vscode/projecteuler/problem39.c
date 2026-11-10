#include <stdio.h>

int main() {
    int ctr;
    int max=0;
    int max_p=0;
    

    for(int p=2;p<=1000;p+=2){
        ctr=0;
        for(int a=1;a<(p/3)+1;a++){
            if((p*p-2*a*p)%(2*(p-a))==0){
                ctr++;
            }
        }
        if(ctr>max){
            max=ctr;
            max_p=p;
        }
    }
    printf("%d",max_p);
    return 0;
}