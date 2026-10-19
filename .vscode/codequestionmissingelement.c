#include <stdio.h>

int main() {
    int n;
    printf("enter the range");
    scanf("%d",&n);
    
    int a[n];
    int sum=0;
    for(int i=0;i<n+1;i++){
        printf("enter the element\n");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int diff=n*(n+1)/2 -sum;
    printf("the missing element is %d",diff);
    return 0;
}