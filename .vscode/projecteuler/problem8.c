#include <stdio.h>

int main() {
    int n=0;
    printf("enter the number ");
    scanf("%d", &n);
    printf("\nenter the number of digits u want to check");
    int m=0;
    scanf("%d",&m);
   
    int ndigits=0;
    int temp=n;
    
    while(temp!=0){
        ndigits++;
        temp/=10;
    }
     if(m>ndigits){
        printf("not possible");
        return 0;
    }
    temp=n;
    int ar[ndigits];
    for(int i=0;i<ndigits;i++){
        if(temp==0){
            break;
        }
        ar[i]=temp%10;
        temp=temp/10;
    }
    int pro=1;
    int promax=1;
    int numbermade[m];
    int ctr=0;
    for(int i=0;i<=ndigits-m;i++){
        pro=1;
        for(int j=i;j<m+i;j++){
            pro*=ar[j];

        }
        if(pro>promax){
            promax=pro;
            ctr=0;
            for(int j=i;j<m+i;j++){
                numbermade[ctr]=ar[j];
                ctr++;
            }


        }
    }
    printf("\n\n");
    printf("%d",promax);
    printf("\n");
    for(int i=m-1;i>=0;i--){
        printf("%d",numbermade[i]);
    }



    return 0;
}