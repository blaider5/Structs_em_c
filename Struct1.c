/*1) Faça um programa em C que utilize structs para armazenar os dados de funcionários de uma
empresa. Cada funcionário de deve possuir:
● Nome (string de até 30 caracteres)
● Idade
● Sexo (representado por um caractere, ‘M’ ou ‘F’)
● CPF (armazenado em string)
● Cargo que ocupa (string de até 30 caracteres)
● Salário
● Data de Nascimento (dia e ano números inteiros, mês deve ser uma string)
● Codigo do Setor onde trabalha (0-99)
OBS: Você pode definir quantas estruturas achar necessário. Seu programa deve criar
um vetor de 3 funcionários. Use a diretiva define para definir o tamanho do vetor. Em seguida,
o usuário deve entrar com as informações para preencher esse vetor. Finalmente, seu
programa deve imprimir o vetor preenchido.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define TAM 2

struct funcionario{

	char nome[30], cpf[15], cargo[30], sexo, mes[10];
	int idade, dia, ano, setor;
    float salario;

}funcionarios[TAM];

int main(void)
{
	
    for(int i=0; i<TAM; i++)
    {   
        printf("\n\t      (CADASTRO DE DADOS '%d')\n\n", i+1);

        fflush(stdin);// Limpar
        printf("\tInsira o nome do funcionario %d: ", i+1);
            fgets(funcionarios[i].nome, 30, stdin);
        
        printf("\tInsira a idade: ");
            scanf("%d", &funcionarios[i].idade);

        printf("\tInsira o sexo, Masculino[M], Feminino[F]: ");
            scanf(" %c", &funcionarios[i].sexo);

        fflush(stdin);// Limpar
        printf("\tInsira o CPF, completo: ");
            fgets(funcionarios[i].cpf, 15, stdin);
      
        fflush(stdin);// Limpar
        printf("\tInsira o Cargo: ");
            fgets(funcionarios[i].cargo, 30, stdin);
    
        printf("\tInsira o salario: ");
            scanf("%f", &funcionarios[i].salario);

        printf("\tInsira o numero do Setor: ");
            scanf("%d", &funcionarios[i].setor);

        printf("\n\t      - Data de nascimento -\n\n");

        printf("\tInsira o Dia: ");
            scanf("%d", &funcionarios[i].dia);

        fflush(stdin);// Limpar
        printf("\tInsira o Mes: ");
            gets(funcionarios[i].mes);

        printf("\tInsira o Ano: ");
            scanf("%d", &funcionarios[i].ano);

        printf("---------------------------------------------------\n");
        
    }

    printf("\n\t      (EXIBINDO NA TELA) \n");
    
    for(int i=0; i<TAM; i++)
    {
        printf("\n\tFuncionario [%d]: %s", i+1, funcionarios[i].nome);
        printf("\tIdade: %d\n", funcionarios[i].idade);
        printf("\tSexo: %c\n", funcionarios[i].sexo);
        printf("\tCPF: %s\n", funcionarios[i].cpf);
        printf("\tCargo: %s", funcionarios[i].cargo);
        printf("\tSalario: R$%0.2f\n", funcionarios[i].salario);
        printf("\tData de Nascimento: %d/%s/%d\n", funcionarios[i].dia, funcionarios[i].mes, funcionarios[i].ano);
        printf("\tN-Setor: %d", funcionarios[i].setor);
        printf("\n---------------------------------------------------\n\n");
    }

    
    return 0;
}
