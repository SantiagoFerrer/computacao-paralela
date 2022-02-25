#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "");
	char caracter, str[] = "Hello World";
	int tamanho = sizeof(str) / sizeof(str[0]);
	int* posicoes = (int*)malloc(tamanho * sizeof(int));
	int cont = 0;
	printf("String: %s\n", str);
	printf("Insira o caracter a ser procurado: ");
	scanf("%c", &caracter);
	for (int i = 0; i < tamanho; i++) {
		if (str[i] == caracter) {
			posicoes[cont] = i+1;
			cont++;
		}
	}
	if (cont > 0) {
		printf("\nO caracter pode ser encontrado na seguintes posições: ");
		for (int i = 0; i < cont; i++) {
			printf("%d, ", posicoes[i]);
		}
	}
	else {
		printf("A string não possui esse caracter");
	}
	free(posicoes);
}