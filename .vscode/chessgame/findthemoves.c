#include <stdio.h>

int main() {
    printf("enter q for queen, N for knight, b for bishop, r for rook, p for pawn, k for king\n");
    char piece;
    scanf("%c",&piece);
    printf("you entered: %c\n", piece);
    printf("enter the position of the piece in chess notation (0,0) or (1,7) with proper indices: ");
    int a=0;
    int b=0;
    if(scanf("%d %d",&a,&b) == 2) {
        ;
    } else {
        printf("invalid input\n");
    }
    printf("enter w for white and b for black: ");
    char color;
    scanf(" %c",&color);
    switch (piece){
        case 'p':
        if(color=='w'){

            if(a==1&&){
                printf("(%d,%d)\n",a+1,b);
                printf("(%d,%d)\n",a+2,b);
                if(b==0){
                    printf("(%d,%d)\n",a+1,b+1);
                }

            }


    }


    return 0;
}
}