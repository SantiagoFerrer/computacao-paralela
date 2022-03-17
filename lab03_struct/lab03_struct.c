#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[10];
    int idade;
    float altura;
} Pessoa;

int compare(const void* a, const void* b) {
    Pessoa* pessoaA = (Pessoa *)a;
    Pessoa* pessoaB = (Pessoa *)b;

    if (pessoaA->altura < pessoaB->altura) return -1;

    return(pessoaA->altura > pessoaB->altura);
};

int main() {
    FILE* txt_file = fopen("pessoas.txt", "r");
    if (txt_file == NULL) {
        perror("Nao foi possivel abrir o arquivo");
    };

    char line[50];
    Pessoa pessoas[10];
    int acc = 0;
    while (fgets(line, sizeof(line), txt_file)) {
        Pessoa pessoa;
        char* piece = strtok(line, ";");
        strcpy(pessoa.nome, piece);

        piece = strtok(NULL, ";");
        int idade = strtol(piece, NULL, 10);
        pessoa.idade = idade;

        piece = strtok(NULL, ";");
        float altura = atof(piece);
        pessoa.altura = altura;
        pessoas[acc] = pessoa;
        acc++;
    };

    qsort(pessoas, 10, sizeof(Pessoa), compare);

    FILE* write_file;
    write_file = fopen("ordenado.txt", "w");
    for (int i = 0; i < 10; i++) {
        fputs(pessoas[i].nome, write_file);
        fputs(";", write_file);
        char nome[10];
        sprintf(nome, "%d", pessoas[i].idade);
        fputs(nome, write_file);
        fputs(";", write_file);
        char altura[10];
        sprintf(altura, "%.2f", pessoas[i].altura);
        fputs(altura, write_file);
        fputs("\n", write_file);
    };
    fclose(write_file);
    return 0;
}
