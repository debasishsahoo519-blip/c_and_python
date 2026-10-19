#include <stdio.h>
#include <math.h>
int main() {
    double guess=0.0;
    double n=0.0;
    printf("enter a number");
    scanf("%lf",&n);
    printf("\nenter number of times to iterate");
    int iterations;
    scanf("%d", &iterations);
    double sqrt=0.0;
    for (int i=1.0;i*i<=n;i++){
        guess=i;
    }
    if((guess*guess)==n){
        printf("\n%lf",guess);
    }
    else{
        double div=0.0;
        double avg=0.0;
        for(int i=1;i<=iterations;i++){
            div=n/guess;
            avg=(guess+div)/2.0;
            guess=avg;
        }
        printf("\n%.14lf",guess);
        

    }
    double diff=pow(n,0.5)-guess;
    diff=diff<0?diff*-1:diff;
    double change=diff/n *100;
    printf("\n%.14lf percent",change);
    return 0;
}