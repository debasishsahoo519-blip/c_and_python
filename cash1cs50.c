#include <stdio.h>

int main() {
    int change;
    printf("enter change");
    scanf("%d",&change);
    int twe=0;
    int diff=change;

    while(diff>=25){
        diff-=25;
        twe++;

    }
    printf("number of twenty five cents=%d \n",twe);
    change-=twe*25;
    int ten=0;
    diff=change;

    while(diff>=10){
        diff-=10;
        ten++;

    }
    printf("number of 10 cents=%d\n",ten);

    int five=0;
    change-=ten*10;
    diff=change;

    while(diff>=5){
        diff-=5;
        five++;

    }
    printf("number of 5 cents=%d\n",five);
    change-=five*5;
    int one=0;
    
    diff=change;

    while(diff>=1){
        diff-=1;
        one++;

    }
    printf("number of 1 cents=%d\n",one);
    int total=twe+five+ten+one;
    printf("total=%d",total);

    return 0;
}