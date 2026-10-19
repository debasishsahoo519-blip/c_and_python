#include <stdio.h>

int main() {
    int N=0;
    printf("enter a number");
    scanf("%d",&N);
    int rem;
    int p[N+1];
    for(int i=0;i<N;i++){
        p[i]=1;

    }
    p[0]=0;
    p[1]=0;
    for(int i=2;i*i<=N;i++){
        rem=N/i;
        if(p[i]==1){
            for(int r=2;r<=rem;r++){
                p[r*i]=0;
            }
        }
    }
    for(int i=0;i<N+1;i++){
        if(p[i]==1){
            printf("%d\n",i);
        }
    }
    return 0;
}
