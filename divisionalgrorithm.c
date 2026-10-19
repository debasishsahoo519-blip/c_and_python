#include <stdio.h>
int main ()
{
    /*first for positive integers and trusting the users
    printf("enter two numbers first number bigger ");
    int a,b; 
    scanf("%d,%d",&a,&b);
    int r=a%b;
    int q=a/b;
    printf("%d=%dx%d+%d",a,b,q,r);*/

    // now we have to restrict b>0 because user is unpredictable like me
    int a,b;
    printf("enter dividend");
    scanf("%d",&a);
    printf("enter divisor");
    scanf("%d",&b);
    
    if(b>0)
    {
        if(a>=0){
            int r=a%b;
            int q=a/b;
            printf("%d=%dx%d+%d",a,b,q,r);
        }
        if(a<0){
            //first i forgot to check for cases where the a can be kb so add this 
            int r=a%b;
            int q=a/b;
            if(a-(q*b)==0){
                printf("%d=%dx%d+%d",a,b,q,r);
                goto checkpoint;
            }
            int p = -1*a;
            int q2=p/b;
            q2+=1;
            int r2=a-(b*-1*q2);
            printf("%d=%dx-%d+%d",a,b,q2,r2);
        }
    checkpoint:
    }
    if (b<=0){
        printf("sorry fuck u");
    }
    return 0;
}