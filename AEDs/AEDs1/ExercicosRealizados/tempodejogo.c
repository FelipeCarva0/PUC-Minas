#include<stdio.h>
int main(){
    int time, hi, hf, i=0;
    scanf("%d %d", &hi, &hf);
    if(hi>hf){
        hf=24+hf;
    }
    time=hf-hi;
    if(time<0){
    time=(time*(-1));
    }
    if(hi==hf){
        time=24;
    }
    printf("O JOGO DUROU %d HORA(S)", time);
}
