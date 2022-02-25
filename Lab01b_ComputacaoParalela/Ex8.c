#include <stdio.h>
#include <stdlib.h>

void TransporMatriz(int matriz1[][3], int matriz2[][2]) {
    int linhas = 2;
    int colunas = 3;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz2[j][i] = matriz1[i][j];
        }
    }
}

int main()
{
    int matriz2[3][2];
    int matriz1[2][3] = { {9,1,5},{6,2,7 } };
    int linhas = 2;
    int colunas = 3;

    printf("\nMatriz: "); 
    for (int i = 0; i < linhas; i++) {
        printf("\n");
        for (int j = 0; j < colunas; j++) {
            printf("%d  ", matriz1[i][j]);
        }
    }

    TransporMatriz(matriz1, matriz2);

    printf("\nMatriz transposta: "); 
    for (int i = 0; i < colunas; i++) {
        printf("\n");
        for (int j = 0; j < linhas; j++) {
            printf("%d  ", matriz2[i][j]);
        }
    }
}
