#include <stdio.h>
int  getdigits(int a ){
    int digit=0;
    int digits[]={0,0,0,0};
    int i=0;
    while(a>0){
        digit=a%10;
        digits[i]=digit;
        i++;
        a=a/10;
    }
    int temp;// this is for swapping with third variable

    for (int k=0;k<3;k++){

    
        for (int j=0;j<3;j++){
        if (digits[j+1]<digits[j]){
            temp=digits[j+1];
            digits[j+1]=digits[j];
            digits[j]=temp;

        }
    }
}
    int descdigits[]={0,0,0,0};
    for (int i=0;i<4;i++){
        descdigits[i]=digits[3-i];

    }
    int asc=0;
    int desc=0;
    for (int i=0;i<4;i++){
        asc *= 10;
        asc += digits[i];
        desc *= 10;
        desc += descdigits[i];



    }
    return desc-asc;

}

int main() {
    int n;
    int ctr;
    int max=1,min=1;
    int nums[9000];
    int k=0;
    int ctr2=0;
    for ( int i=1000;i<10000;i++){
        ctr=0;
        n=i;
        while (10>0){
            n=getdigits(n);
            ctr++;
            if (n==0){
                break;
            }
            if (n==6174){
                break;
            }
        }
        if(ctr>max){
            max=ctr;
        }
        if(ctr<min){
            min=ctr;
        }
        if (ctr==7){
            nums[k]=i;
            ctr2++;
            k++;
        }
        
        

    }
    printf("max is %d,min is %d",max,min);
    for(int i=0;i<ctr2;i++){
        printf("%d,\n",nums[i]);
    }
    printf("total number is %d",k);
    return 0;
}
// now try for ctr=6,5,4,3,2,1 as minimum is just 1 its no point in doing so 
// if going to find the ctr try removing the prints of all  1980 numbers as it looks messier
