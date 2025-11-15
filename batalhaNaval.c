#include <stdio.h>

int main() {

    // Criando o tabuleiro 10x10
    int tabuleiro[10][10];

    // Preenchendo o tabuleiro com 0
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navios tamanho 3
    int navio1[3] = {3, 3, 3}; // horizontal
    int navio2[3] = {3, 3, 3}; // vertical
    int navio3[3] = {3, 3, 3}; // diagonal direita
    int navio4[3] = {3, 3, 3}; // diagonal esquerda

    // Coordenadas escolhidas
    // Horizontal
    int hL = 1;
    int hC = 2;

    // Vertical
    int vL = 4;
    int vC = 7;

    // Diagonal direita
    int d1L = 6;
    int d1C = 1;

    // Diagonal esquerda
    int d2L = 2;
    int d2C = 8;

    // Posicionando navio horizontal
    tabuleiro[hL][hC]     = 3;
    tabuleiro[hL][hC + 1] = 3;
    tabuleiro[hL][hC + 2] = 3;

    // Posicionando navio vertical
    tabuleiro[vL][vC]     = 3;
    tabuleiro[vL + 1][vC] = 3;
    tabuleiro[vL + 2][vC] = 3;

    // Posicionando navio diagonal descendo para direita
    tabuleiro[d1L][d1C] = 3;
    tabuleiro[d1L + 1][d1C + 1] = 3;
    tabuleiro[d1L + 2][d1C + 2] = 3;

    // Posicionando navio diagonal descendo para esquerda
    tabuleiro[d2L][d2C] = 3;
    tabuleiro[d2L + 1][d2C - 1] = 3;
    tabuleiro[d2L + 2][d2C - 2] = 3;

    // Exibindo o tabuleiro completo
    printf("TABULEIRO NIVEL AVENTUREIRO:\n\n");

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
