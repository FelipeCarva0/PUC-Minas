
#include <stdio.h>

void cadastrarRespostas(int n_alunos, int n_questoes, char respostas[][n_questoes]) {
    for (int i = 0; i < n_alunos; i++) {
        for (int j = 0; j < n_questoes; j++) {

            scanf(" %c", &respostas[i][j]);
        }
    }
}

void cadastrarGabarito(int n_questoes, char gabarito[]) {
    for (int i = 0; i < n_questoes; i++) {
        scanf(" %c", &gabarito[i]);
    }
}

int* calcularPontuacao(int n_alunos, int n_questoes, char respostas[][n_questoes], char gabarito[]) {
    static int pontuacoes[100];

    for (int i = 0; i < n_alunos; i++) {
        pontuacoes[i] = 0;
        for (int j = 0; j < n_questoes; j++) {
            if (respostas[i][j] == gabarito[j]) {
                pontuacoes[i]++;
            }
        }
    }

    return pontuacoes;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char respostas[N][M];
    char gabarito[M];

    cadastrarRespostas(N, M, respostas);
    cadastrarGabarito(M, gabarito);


    int* pontuacoes = calcularPontuacao(N, M, respostas, gabarito);


    for (int i = 0; i < N; i++) {
        printf("%d ", pontuacoes[i]);
    }
    printf("\n");

    return 0;
}
