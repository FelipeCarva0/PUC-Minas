#include<stdio.h>
int main(){
    char sexo;
    int idade=1, naoGosto=0, fGosto=0, mGosto=0, quantHomem=0, quantMulher=0, velhoGostou=0, novaDesgostou=199;
    int ver;
    float percent, convert;
    while(idade>0){
    printf("\nDigite sua idade: ");
        scanf("%d", &idade);
        if(idade>0){
            printf("\nDigite seu sexo: M-masculino F-feminino ");
            scanf(" %c", &sexo);
            if(sexo=='M'){
                quantHomem=quantHomem+1.0;
                printf("\nVoce gostou do produto? Digite 1 para sim e 0 para não");
                scanf("%d", &ver);
                if(ver==1){
                    mGosto=mGosto+1;
                    if(idade>velhoGostou){
                        velhoGostou=idade;
                    }
                }
                if(ver==0){
                    naoGosto=naoGosto+1;
                }


            }
            if(sexo=='F'){
                quantMulher=quantMulher+1.0;
                printf("\nVoce gostou do produto? Digite 1 para sim e 0 para não");
                scanf("%d", &ver);
                if(ver==1){
                    fGosto=fGosto+1;
                }
                if(ver==0){
                    naoGosto=naoGosto+1;
                    if(idade<novaDesgostou){
                        novaDesgostou=idade;
                    }
                }
            }


        }

    }
    //
    convert=naoGosto;
    printf("\nQuantidade de homens que gostaram: ");
    printf("Masculino: %d\n", mGosto);
    printf("\nQuantidade de mulheres que gostaram: ");
    printf("Feminino: %d\n", fGosto);
    printf("\nA pessoa mais velha do gênero masculino que gostou do produto:");
    printf("%d anos\n", velhoGostou);
    printf("\nA pessoa mais nova do gênero feminino que não gostou do produto: ");
    printf("%d anos\n", novaDesgostou);
    percent=(convert/(quantHomem+quantMulher))*100;
    printf("\nPercentual de pessoas que não gostaram: ");
    printf("%.2f%%", percent);
}
