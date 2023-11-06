#include <stdio.h>

int main() {
    int PT;
    float a=1.33,b=1.66,m,C;
    scanf("%d%f",&PT,&m);
    if(PT<=60){
        C=PT*m;
    }else if(PT>=61 && PT<=120){
        PT-=60;
        C=PT*m*a+60*m;
    }else {
        PT-=120;
        C=PT*m*b+60*m*a+60*m;
    }
    printf ("%.1f\n",C);
}

