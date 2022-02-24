
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int max = 2;
    do {
        printf("Digite o número máximo (deve ser ímpar): ");
        scanf_s("%d", &max);
    } while (max % 2 == 0);
    for (int i = 0; i < max; i++) {
        printf("\n");
        for (int x = 0; x < i+1/ 2; x++) {
            printf("  ");
        }
        for (int j = i+1; j <= max - i; j++) {
            printf(" %d",j);
        }
    }  

}