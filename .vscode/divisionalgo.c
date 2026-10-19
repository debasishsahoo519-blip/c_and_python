#include <stdio.h>

int main() {
    int a=0;
    int b=0;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    int r=0;
    int p=0;
    int q=0;
    int r_=0;
    int rfinal=0;
    int z=0;
    int c=(b>0)?b:-1*b;
    if(b==0){
        printf("please enter a non zero b");
    }else if(a==0){
        printf("please enter non zero a");  
    }
    else{
    while(true){
        p++;
        q--;
        r=a-b*p;
        r_=a-b*q;
        if((r<c)&&(r>=0)){
            rfinal=r;
            z=p;
            break;
        }
        if((r_<c)&&(r_>=0)){
            rfinal=r_;
            z=q;
            break;
        }
    }
    printf("%d=%dx%d+%d",a,b,z,rfinal);

    
}
return 0;
}