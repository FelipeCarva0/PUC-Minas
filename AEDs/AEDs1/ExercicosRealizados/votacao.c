#include<stdio.h>
int main(){
    int voto, c1=0,c2=0,c3=0,c4=0,vtn=0, vtb=0, totalVotos=1;
    double pertb;
   /* printf("1  Candidato 1 \n");
    printf("2  Candidato 2 \n");
    printf("3  Candidato 3 \n");
    printf("4  Candidato 4 \n");
    printf("5  Voto nulo \n");
    printf("6  Voto branco \n");*/
    while(1){

            /*printf("Digite o voto (0 para encerrar): ");*/
        scanf("%d", &voto);

    if (voto == 0) {
            break; // Encerra o loop se o voto for 0
        }

        totalVotos++; // Incrementa o total de votos


        switch (voto) {
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                vtn++;
                break;
            case 6:
                vtb++;
                break;
            default:
                /*printf("Voto inválido! Tente novamente.\n");*/
                totalVotos--; // Não conta voto inválido
                break;
        }

    }
        printf("Candidato 1: %d voto(s) \n", c1);
        printf("Candidato 2: %d voto(s) \n", c2);
        printf("Candidato 3: %d voto(s) \n", c3);
        printf("Candidato 4: %d voto(s) \n", c4);
        printf("Votos nulos: %d \n", vtn);

        if (totalVotos > 0) {
         pertb = (double)vtb / totalVotos * 100;
        printf("Porcentagem de votos em branco: %.2f%%\n", pertb);
    } else {
        printf("Porcentagem de votos em branco: 0.00%%\n");
    }

    return 0;
}



