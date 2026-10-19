#include <stdio.h>

int count(int o,int t,int h);
int main() {
    int n=1000;
    int sum=0;
    // int sum=106;
    
    for(int i=1;i<1000;i++){
       sum+=count(i%10,((i-i%10)/10)%10,i/100);
    }
   sum+=11;//for thousand
    printf("%d",sum);
    return 0;

    
}

int count(int o,int t, int h){
    int ctr=0;
    int check=0;
    if(t==1){
        if(o==0){
            ctr+=3;
        }
        if(o==1){
            ctr+=6;
        }
        if(o==2){
            ctr+=6;
        }
        if(o==3){
            ctr+=8;
        }
        if(o==4){
            ctr+=8;
        }
        if(o==5){
            ctr+=7;
        }
        if(o==6){
            ctr+=7;
        }
        if(o==7){
            ctr+=9;
        }
        if(o==8){
            ctr+=8;
        }
        if(o==9){
            ctr+=8;
        }
        check=1;

    
}
if(t!=1){
    if(o==0){
            ctr+=0;
        }
        if(o==1){
            ctr+=3;
        }
        if(o==2){
            ctr+=3;
        }
        if(o==3){
            ctr+=5;
        }
        if(o==4){
            ctr+=4;
        }
        if(o==5){
            ctr+=4;
        }
        if(o==6){
            ctr+=3;
        }
        if(o==7){
            ctr+=5;
        }
        if(o==8){
            ctr+=5;
        }
        if(o==9){
            ctr+=4;
        }
        
}
if(t==2){
    ctr+=6;
}
if(t==3){
    ctr+=6;
}
if(t==4){
    ctr+=5;
}
if(t==5){
    ctr+=5;
}
if(t==6){
    ctr+=5;
}
if(t==7){
    ctr+=7;
}
if(t==8){
    ctr+=6;
}
if(t==9){
    ctr+=6;
}
if(h==0){
            ctr+=0;
        }
        if(h==1){
            ctr+=3;
        }
        if(h==2){
            ctr+=3;
        }
        if(h==3){
            ctr+=5;
        }
        if(h==4){
            ctr+=4;
        }
        if(h==5){
            ctr+=4;
        }
        if(h==6){
            ctr+=3;
        }
        if(h==7){
            ctr+=5;
        }
        if(h==8){
            ctr+=5;
        }
        if(h==9){
            ctr+=4;
        }
if(h!=0){
    ctr+=10;
}
int d=h*100+t*10+o;
if(d%100==0){
    ctr=ctr-3;
}

return ctr;

}
