#include <stdio.h>
int npath(int x, int y,int n){
    int path=0;
    if (x==n && y==n){
        return 1;
    }
    if (x<n){
        path+=npath(x+1,y,n);
    }
    if(y<n){
        path+=npath(x,y+1,n);

    }
    return path;
}
int main() {
    printf("%d",npath(0,0,10));
    return 0;
}