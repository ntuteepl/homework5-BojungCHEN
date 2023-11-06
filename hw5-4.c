#include <stdio.h>

int main() {
    int H,M;
    scanf("%d%d",&H,&M);
    if(H<1 && H>12 && M<00 && M>60)
        return 1;
    float Dm1=6.0,Dh1=30.0,Dr=M/2.0,Dm,Dh,DF;
    Dm=Dm1*M;
    Dh=Dh1*H+Dr;
    if(Dm>=Dh){
    DF=Dm-Dh;
    if(DF>180)
        DF=360-DF;
    }else{
    DF=Dh-Dm;
    if(DF>180)
        DF=360-DF;
    }
    printf("%.3f ",DF);

    return 0;
}

