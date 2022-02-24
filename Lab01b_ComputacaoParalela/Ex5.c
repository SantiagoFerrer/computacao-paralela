#include <stdio.h>
#include <locale.h>
#include <malloc.h>

void mostrarMatriz(int **matriz, int linhas, int colunas) {
    printf("\nMatriz: ");
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
    int ** matriz, linhas, colunas, multiplicador, linhaMulti, colunaMulti;

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

    mostrarMatriz(matriz, linhas, colunas);
    
    printf("\n\nDigite a linha que será multiplicada: ");
    scanf("%d", &linhaMulti);
    printf("Digite por quanto ela será multiplicada: ");
    scanf("%d", &multiplicador);

    for (int i = 0; i < colunas; i++) {
        matriz[linhaMulti-1][i] *= multiplicador;
    }

    mostrarMatriz(matriz, linhas, colunas);

    printf("\n\nDigite a coluna que será multiplicada: ");
    scanf("%d", &colunaMulti);
    printf("Digite por quanto ela será multiplicada: ");
    scanf("%d", &multiplicador);

    for (int i = 0; i < linhas; i++) {
        matriz[i][colunaMulti-1] *= multiplicador;
    }

    mostrarMatriz(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}
