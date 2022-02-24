#include <stdio.h>
#include <locale.h>
#include <malloc.h>

void mostrarMatriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        printf("\n");
        for (int j = 0; j < colunas; j++) {
            printf("%d  ", matriz[i][j]);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "");
    int **matriz1, **matriz2, linhas, colunas;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de linhas da colunas: ");
    scanf("%d", &colunas);

    matriz1 = (int**)malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz1[i] = (int*)malloc(colunas * sizeof(int));
    }
    matriz2 = (int**)malloc(colunas * sizeof(int*));
    for (int i = 0; i < colunas; i++) {
        matriz2[i] = (int*)malloc(linhas * sizeof(int));
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o valor na %d° linha e na %d° coluna: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nMatriz: ");
    mostrarMatriz(matriz1, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz2[j][i] = matriz1[i][j];
        }
    }

    printf("\nMatriz transposta: ");
    mostrarMatriz(matriz2, colunas, linhas);

    for (int i = 0; i < linhas; i++) {
        free(matriz1[i]);
    }
    free(matriz1);
    for (int i = 0; i < colunas; i++) {
        free(matriz2[i]);
    }
    free(matriz2);
}
