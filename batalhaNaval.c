#include <stdio.h>

int main() {

    // Criando o tabuleiro 10x10
    int tabuleiro[10][10];

    // Preenchendo o tabuleiro com 0 (água)
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navios com tamanho 3
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios
    // coloquei valores simples
    int linhaH = 2;
    int colunaH = 1;

    int linhaV = 5;
    int colunaV = 7;

    // Posicionando navio horizontal (vai para o lado)
    tabuleiro[linhaH][colunaH] = 3;
    tabuleiro[linhaH][colunaH + 1] = 3;
    tabuleiro[linhaH][colunaH + 2] = 3;

    // Posicionando navio vertical (vai para baixo)
    tabuleiro[linhaV][colunaV] = 3;
    tabuleiro[linhaV + 1][colunaV] = 3;
    tabuleiro[linhaV + 2][colunaV] = 3;

    // Exibindo o tabuleiro
    printf("TABULEIRO NIVEL NOVATO:\n\n");

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
