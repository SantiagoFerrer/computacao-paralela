#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	bool comparado = false;
	char nome1[50], nome2[50];
	printf("Digite um nome: ");
	fgets(nome1, sizeof(nome1), stdin);
	printf("Digite outro nome: ");
	fgets(nome2, sizeof(nome2), stdin);

	for (int i = 0; i < 50; i++) {
		if (nome1[i] < nome2[i]) {
			printf("%s", nome1);
			printf("%s", nome2);
			break;
		}
		else if (nome2[i] < nome1[i]) {
			printf("%s", nome2);
			printf("%s", nome1);
			break;
		}
	}
}