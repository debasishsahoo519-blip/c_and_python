#include <stdio.h>
 int p[2000001]; 
int main() {
    int N=0;
  
    printf("enter a number");
     
    scanf("%d",&N);
   
    int rem;
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
    long long sum=0;
    for(int i=0;i<N;i++){
        if(p[i]==1){
            sum+=i;
        }
    }
    printf("\n %lld",sum);
    return 0;
}