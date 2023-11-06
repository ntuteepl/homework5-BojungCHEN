#include <stdio.h>

int main() {
    int H,M;
    scanf("%d%d",&H,&M);
    if(H<1 && H>12 && M<00 && M>60)
        return 1;
    float Dm1=6.00,Dh1=30.00,Dm,Dh,DF;
    Dm=Dm1*M;
    Dh=Dh1*H;
    if(Dm>=Dh){
    DF=Dm-Dh;
    if(DF>180)
        DF-=180;
    }else{
    DF=Dh-Dm;
    if(DF>180)
        DF-=180;
    }
    printf("%.3f",DF);

    return 0;
}

