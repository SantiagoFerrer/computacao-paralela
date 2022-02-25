#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void mostrarMatriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        printf("\n");
        for (int j = 0; j < colunas; j++) {
            printf("%d  ", matriz[i][j]);
        }
    }
}

void multiSomaMatriz(int** matriz, int linhas, int colunas) {
    printf("\n\nMatriz: ");
    mostrarMatriz(matriz, linhas, colunas);

    for (int i = 0; i < colunas; i++) {
        matriz[1][i] = matriz[0][i] + matriz[1][i];
    }

    printf("\n\nMatriz depois de somar a 1° e a 2° linha: ");
    mostrarMatriz(matriz, linhas, colunas);

    for (int i = 0; i < colunas; i++) {
        matriz[1][i] = matriz[0][i] * matriz[1][i];
    }

    printf("\n\nMatriz depois de multiplicar a 1° e a 2° linha: ");
    mostrarMatriz(matriz, linhas, colunas);
}

int main()
{
    setlocale(LC_ALL, "");
    int** matriz, linhas, colunas;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de linhas da colunas: ");
    scanf("%d", &colunas);

    matriz = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor na %d° linha e na %d° coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    multiSomaMatriz(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}
