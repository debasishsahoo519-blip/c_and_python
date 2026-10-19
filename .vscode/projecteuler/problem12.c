#include <stdio.h>
int ndivisors(long long m);
int main() {
    //first we generate triangular numbers . 
    long long n=1;
    long long i=1;
    while(true){
        n=i*(i+1);
        n=n/2;
       /* if(ndivisors(n)>500){
            printf("\n%d  %d ",n,ndivisors(n));
            break;
        } */
       //optimized one -:
       if(i%2==0){
        if(ndivisors(i/2)*ndivisors(i+1)>500){
            printf("\n %lld %lld",n,ndivisors(i/2)*ndivisors(i+1));
            break;
        }
       }else{
        if(ndivisors((i+1)/2)*ndivisors(i)>500){
            printf("\n %lld %lld",n,ndivisors((i+1)/2)*ndivisors(i));
            break;
        }
       }
       
        i++;
    
    }
    return 0;
}
int ndivisors(long long m){
    int ctr=0;
    long long d=m/2;
    for(long long i=1;i*i<=m;i++){
        if(i*i==m){
            ctr++;
        }
        else if(m%i==0){
            ctr+=2;
        }
        

    }
    return (ctr);

}