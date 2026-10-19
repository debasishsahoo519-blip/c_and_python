#include <stdio.h>
int numberstepscollatz(int n);
void collatzrangemax(void){
    // normally we do from 1 to n this time i w ill do from n1 to n2
    int lower=0;
    int upper=0;

    printf("enter the lower limit");    
    scanf("%d",&lower);
    printf("enter the upper limit");
    scanf("%d",&upper);
    int n1=lower;
    int n2=upper;
    int max=0;
    int min;
    int x;
    int ctr=0;
    if(n1>n2){
       printf("upper should be greater,are u dumb");

    }else{
        int maxelements[n2-n1+1];
        for(int j=0;j<n2-n1;j++){
            maxelements[j]=0;
        }
        for ( int i=n1;i<=n2;i++){
            x=numberstepscollatz(i);
            if(x>max){
                ctr=0;
                for(int j=0;j<n2-n1+1;j++){
                     maxelements[j]=0;
        }
            max=x;
        maxelements[ctr]=i;
        ctr++;
            
        
        
            }
            else if(x==max){
                maxelements[ctr]=i;
                ctr++;
            }

        }printf("total number of elements having max steps=%d are %d",max,ctr);

        for(int k=0;k<ctr;k++){
            printf("\n%d",maxelements[k]);
        }
    }
    
}
int numberstepscollatz(int n){
    
    
    int ctr=0;
    int temp=n;
    while(true){
        if(n%2==0){
            n=n/2;

        }else{
            n=3*n+1;
        }
        ctr++;
        if(n==1){
           
            break;
        }
    }
     return ctr;
  
    
}
int main() {
    printf("enter 1 for checking number of steps required to reah 1 or 2 to find maximum number of steps for a range");
    int choice=0;
    scanf("%d",&choice);
   
    if(choice==1){
        printf("enter number");
        int y=0;
        scanf("%d",&y);

        int d=numberstepscollatz(y);
        printf("\nnumber of steps is %d",d);
    }else if(choice==2){
        collatzrangemax();
    }else{
        printf("invalid choice");
    }
    return 0;
}