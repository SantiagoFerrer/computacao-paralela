
#include <stdio.h>
#include <malloc.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int tamanho, ** matriz, min = NULL, linha;

    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);
    
    matriz = (int**) malloc(tamanho * sizeof(int*));
    for (int i = 0; i < tamanho; i++) {
        matriz[i] = (int*)malloc(tamanho * sizeof(int));
    }
    
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("Digite o valor na %d° linha e na %d° coluna: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (!min || (min && matriz[i][j] < min)) {
                min = matriz[i][j];
                linha = i;
            }
        }
    }

    printf("\nO menor valor está na linha %d", linha+1);

    for (int i = 0; i < tamanho; i++) {
        free (matriz[i]);
    }
    free (matriz);
}