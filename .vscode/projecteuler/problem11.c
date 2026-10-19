#include <stdio.h>

int main() {
    
    int ar[20][20];
    printf("enter row by row");

/* 
    for(int i=0;i<20;i++){
      
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ",&ar[i][0],&ar[i][1],&ar[i][2],&ar[i][3],&ar[i][4],&ar[i][5],&ar[i][6],&ar[i][7],&ar[i][8],&ar[i][9],&ar[i][10],&ar[i][11],&ar[i][12],&ar[i][13],&ar[i][14],&ar[i][15],&ar[i][16],&ar[i][17],&ar[i][18],&ar[i][19]);
        printf("\n");
    }
 */
for(int i=0;i<20;i++){
    for(int j=0;j<20;j++){
        scanf("%d",&ar[i][j]);
    }
}

   /* for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }*/
    int pro=1;
    int promax=1;
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            if(j<=16){
                pro=ar[i][j]*ar[i][j+1]*ar[i][j+2]*ar[i][j+3];
                promax=(pro>promax)?pro:promax;
            }
            if(i<=16){
               pro=ar[i][j]*ar[i+1][j]*ar[i+2][j]*ar[i+3][j];
               promax=(pro>promax)?pro:promax;
            }
            if(i<=16&&j<=16){
                pro=ar[i][j]*ar[i+1][j+1]*ar[i+2][j+2]*ar[i+3][j+3];
                promax=(pro>promax)?pro:promax;
            }
            if(i<=16&&j>=3){
                pro=ar[i][j]*ar[i+1][j-1]*ar[i+2][j-2]*ar[i+3][j-3];
                promax=(pro>promax)?pro:promax;
            }
        }
    }
    printf("\n\n %d",promax);

    return 0;
}