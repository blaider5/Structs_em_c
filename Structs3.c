#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define TAM 3

struct aluno{

        char nome[30], endereco[100];
        int idade;

}alunos[TAM];

int main(void)
{
	for(int i=0; i<TAM; i++)
    {
        printf("\n\n\t::: Cadastro Aluno %d :::\n", i+1);
        
        fflush(stdin);
        printf("\tInsira o nome do Aluno: "); // salva o nome do aluno
            fgets(alunos[i].nome, 30, stdin);

        printf("\tInsira a idade do Aluno: "); // salva a idade
            scanf("%d", &alunos[i].idade);

        fflush(stdin);
        printf("\tInsira o endereco do Aluno: "); // salva o endereço
            fgets(alunos[i].endereco, 100, stdin);
    }
   
    printf("\n\n\t....Exibindo em tela....\n");

    for(int i=0; i<TAM; i++)
    {
        printf("\n\t::: Dados Aluno %d :::\n", i+1);

        printf("\tNome: %s", alunos[i].nome);
        printf("\tIdade: %d\n", alunos[i].idade);
        printf("\tEndereco: %s\n\n", alunos[i].endereco);
    }
   
    return 0;
}
