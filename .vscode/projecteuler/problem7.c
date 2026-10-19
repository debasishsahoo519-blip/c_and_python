#include <stdio.h>
int checkprime(int m){
    for(int i=2;i*i<=m;i++){
        if(m%i==0){
            return 0;
        }
    }
    return 1;}

int main() {
    int ctr=0;
    int i=2;
    while(true){
        if(checkprime(i)==1){
            ctr++;
        }
        if(ctr==10001){
            printf("\n%d",i);
            break;
        }
        i++;
    }
    return 0;
}