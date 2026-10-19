#include <stdio.h>

int main() {
    printf("enter the number of elements");
    int n=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        printf("enter an integer");
        scanf("%d",&ar[i]);
    }
    int temp=0;
    int k=0;
    while(k<n-1){
        if(ar[k]>ar[k+1]){
            temp=ar[k];
            ar[k]=ar[k+1];
            ar[k+1]=temp;
            k=0;
        }
        else{
            k++;
        }
    }
    printf("\n\n");
    for(int i=0;i<n;i++){   
        printf("%d,",ar[i]);
    }
    return 0;
}