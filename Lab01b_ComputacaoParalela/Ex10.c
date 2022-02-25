#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void mostrarMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        printf("\n");
        for (int j = 0; j < colunas; j++) {
            printf("%d  ", matriz[i][j]);
        }
    }
}

void multiplicarMatriz(int matriz[][3], int linhas, int colunas) {
    int linhaMulti, colunaMulti, multiplicador;
    printf("Matriz: ");
    mostrarMatriz(matriz, linhas, colunas);

    printf("\n\nDigite a linha que será multiplicada: ");
    scanf("%d", &linhaMulti);
    printf("Digite por quanto ela será multiplicada: ");
    scanf("%d", &multiplicador);

    for (int i = 0; i < colunas; i++) {
        matriz[linhaMulti - 1][i] *= multiplicador;
    }

    printf("Matriz depois da multiplicação da linha: ");
    mostrarMatriz(matriz, linhas, colunas);

    printf("\n\nDigite a coluna que será multiplicada: ");
    scanf("%d", &colunaMulti);
    printf("Digite por quanto ela será multiplicada: ");
    scanf("%d", &multiplicador);

    for (int i = 0; i < linhas; i++) {
        matriz[i][colunaMulti - 1] *= multiplicador;
    }

    printf("Matriz depois da multiplicação da coluna: ");
    mostrarMatriz(matriz, linhas, colunas);
}

int main()
{
    setlocale(LC_ALL, "");
    int matriz[2][3] = { {9,1,5},{6,2,7 } };
    int linhas = 2;
    int colunas = 3;

    multiplicarMatriz(matriz, linhas, colunas);

}
