#include <stdio.h>

int main() {

    // Matrizes das habilidades (todas 5x5)
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // Primeiro preenchendo tudo com 0
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cone[i][j] = 0;
            cruz[i][j] = 0;
            octaedro[i][j] = 0;
        }
    }

    // =============================
    // HABILIDADE - CONE
    // =============================

    cone[0][2] = 1;

    cone[1][1] = 1;
    cone[1][2] = 1;
    cone[1][3] = 1;

    cone[2][0] = 1;
    cone[2][1] = 1;
    cone[2][2] = 1;
    cone[2][3] = 1;
    cone[2][4] = 1;

    // =============================
    // HABILIDADE - CRUZ
    // =============================

    cruz[0][2] = 1;

    cruz[1][0] = 1;
    cruz[1][1] = 1;
    cruz[1][2] = 1;
    cruz[1][3] = 1;
    cruz[1][4] = 1;

    cruz[2][2] = 1;

    // =============================
    // HABILIDADE - OCTAEDRO
    // =============================

    octaedro[0][2] = 1;

    octaedro[1][1] = 1;
    octaedro[1][2] = 1;
    octaedro[1][3] = 1;

    octaedro[2][2] = 1;

    // =============================
    // EXIBINDO AS MATRIZES
    // =============================

    printf("HABILIDADE: CONE\n\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\nHABILIDADE: CRUZ\n\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\nHABILIDADE: OCTAEDRO\n\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
