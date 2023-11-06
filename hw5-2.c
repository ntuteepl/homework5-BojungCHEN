#include <stdio.h>

int main() {
    int PM;
    float a=0.9,b=0.79,m=0.9,C;
    scanf("%d\n",&PM);
    if(PM<=800){
        C=PM*m;
    }else if(PM>800 && PM<1500){
        C=PM*m*a;
    }else {
        C=PM*m*b;
    }
    printf ("%.1f\n",C);
}

