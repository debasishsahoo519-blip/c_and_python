#include <stdio.h>


int factorial(int n){
    int pro=1;
    for(int i=1;i<=n;i++){
        pro*=i;
    }
    return pro;
}
int main() {
    int permutations=factorial(10);
    int ar[10]={0,1,2,3,4,5,6,7,8,9};
    int num[10];
    int target=1000000;
    int i=1;
    int x=9;
    int fact=1;
    int ctr=0;
    int diff=0;
    int twonums[2];
    int check=0;
    while(true){
        x=10-i;
        ctr=0;
        fact=factorial(x);
        while(true){

            diff=target-fact;
            if(diff<=0){
                break;
            }
            ctr++;
            target=diff;
        }
        
        for(int j=0;j<10;j++){
            if(ar[j]<0){
                continue;
            }
            if(ctr==0){
                num[i-1]=ar[j];
                check=j;
                break;
            }
            ctr--;
        }
        ar[check]=-67;
                if(target==2){
            for(int k=0;k<10;k++){
                if(ar[k]>=0){
                    twonums[ctr]=ar[k];
                    ctr++;
                }
            }
            num[8]=twonums[1];
            num[9]=twonums[0];
            break;
        }
        if(target==1){
            for(int k=0;k<10;k++){
                if(ar[k]>=0){
                    twonums[ctr]=ar[k];
                    ctr++;
                }
            }
            num[8]=twonums[0];
            num[9]=twonums[1];
            break;
        }
        i++;





    

        

  }
  for(int i=0;i<10;i++){
    printf("%d",num[i]);}




    
    return 0;
}