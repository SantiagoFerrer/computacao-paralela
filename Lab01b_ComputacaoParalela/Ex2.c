#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	float nota1, nota2, nota3, notaME, MA;
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	printf("Digite a nota da média dos exercícios: ");
	scanf("%f", &notaME);

	MA = (nota1 + (nota2 * 2) + (nota3 * 3) + notaME) / 7;
	if (MA < 4) {
		printf("O aluno tirou E");
	}
	else if (MA < 6) {
		printf("O aluno tirou D");
	}
	else if (MA < 7.5) {
		printf("O aluno tirou C");
	}
	else if (MA < 9) {
		printf("O aluno tirou B");
	}
	else {
		printf("O aluno tirou A");
	}
}