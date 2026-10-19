// calculate square of inetger
//using functon area() accepts radius of cicle and returns its area
//farenheit() accepts temp in celcius and returns in farenheit
//simpleinterest() accepts principle rate time and returns si 
//average() accepts 3 float numbers and returns their average
//calculate the volume of cylinder
#include<math.h>
#include <stdio.h>
int sq(int n);
double area(double radius);
double farenheit(double celcius);
double simpleinterest(double principal,double rate,double time);
float average(float a,float b,float c);
double volcylinder(double radius,double height);
 long double pi=acosl(-1.0);
int main(void) {
    
    area(67.0);
     double pi2=acosl(-1.0);
  //  printf("%f\n",area(4));
    printf("%lf",pi2);
    
    return 0;
}
double volcylinder(double radius,double height){
    return (pi*radius*radius*height);
}
int sq(int n){
    return n*n;
}
double area(double radius){
    return(pi*radius*radius);
}
double farenheit(double celcius){
    return((celcius*9.0/5.0)+32.0);
}
double simpleinterest(double principal,double rate,double time){
    return((principal*rate*time)/100.0);
}
float average(float a,float b,float c){
    return((a+b+c)/3.0);
}