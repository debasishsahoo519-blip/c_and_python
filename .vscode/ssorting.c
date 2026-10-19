#include <stdio.h>

int main() {
    printf("enter the number of elements");
    int n=0;
    scanf("%d",&n);
    int ar[n];
    int d=0;
    for(int i=0;i<n;i++){
        printf("enter an integer");
        scanf("%d",&d);
        ar[i]=d;

    }
    int diff=0;
    int temp=0;
    for(int i=1;i<=n;i++){
        diff=0;
        for(int k=0;k<n-1;k++){
            if(ar[k]>ar[k+1]){
                diff=1;
                temp=ar[k];
                ar[k]=ar[k+1];
                ar[k+1]=temp;

            }
        }
        if(diff==0){
            break;
        }
    }
    printf("\n\n");
    int num=0;
    for(int i=0;i<n;i++){
        num=ar[i];
        printf("%d,",num);
    }
    return 0;
}