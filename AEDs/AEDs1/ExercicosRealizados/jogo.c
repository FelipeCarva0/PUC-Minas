#include<stdio.h>
int main(){
    int hi, mi, hf, mf, mti, mtf, d, dm, dh;
    printf("Digite as horas e os minutos inciais:");
    scanf("%d %d", &hi, &mi);
    printf("\nDigite as horas e minutos de termino:");
     scanf("%d %d", &hf, &mf);
    mti=hi*60+mi;
    mtf=hf*60+mf;
    if(mti>mtf){
        d=1440+(mtf-mti);
        dh=d/60;
        dm=d%60;
    }
    if(mti<mtf){
        d=(mtf-mti);
        dh=d/60;
        dm=d%60;
    }
    if(mti==mtf){
        dh=24;
        dm=0;
    }
    printf("%2.2d:%2.2d", dh, dm);
    }

