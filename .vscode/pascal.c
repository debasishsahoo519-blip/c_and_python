#include <stdio.h>
void pascal_triangle(int n) {
    int a[n+1];
    int d[n+1];
    for(int i=0;i<n+1;i++){
        a[i]=0;
        d[i]=0;
    }
    a[0]=1;
    for(int i=1;i<=n;i++){
        d[0]=1;
        for(int j=0;j<=i-1;j++){
            d[j+1]=a[j]+a[j+1];
        }
        for(int j=0;j<i;j++){
            printf("%d ",d[j]);
        }
        printf("\n");
        for(int k=0;k<i;k++){
            a[k]=d[k];
            d[k]=0;
        }
    }
}
    

int main() {
    printf("enter number of rows: ");
    int rows;
    scanf("%d",&rows);
    pascal_triangle(rows);
    return 0;
}