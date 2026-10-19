#include <stdio.h>

int main() {
    int i=1;
    int count=0;
   
    while(true){
        count=0;
        for(int j=1;j<=20;j++){
            if(i%j==0){
                count=1;
                continue;
            }else{
                count=0;
                break;
            }
        }
        if(count==1){
            break;
        }
        i++;
    }
    printf("%d",i);
        return 0;
}