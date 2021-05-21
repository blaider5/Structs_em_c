#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 1

struct horario
{

    int hora, minuto, segundo;
    
};

struct data
{

    int dia, mes, ano;

};

struct compromisso
{

	char texto[200];
    struct horario horarios;
    struct data datas; 

}compromissos[TAM];

int main(void)
{
	
    printf("-- Cadastro de Dados --\n\n");

    for(int i=0; i<TAM; i++)
    {   

        printf("Compromisso %d\n", i+1);

        printf("Texto.......... : ");
        fflush(stdin);
        fgets(compromissos[i].texto, 200, stdin);

        printf("Data [Dia].......... : ");
            scanf("%d", &compromissos[i].datas.dia);

        printf("Data [Mes].......... : ");
            scanf("%d", &compromissos[i].datas.mes);

        printf("Data [Ano].......... : ");
            scanf("%d", &compromissos[i].datas.ano);

        printf("Horario [Hora/s].......... : ");
            scanf("%d", &compromissos[i].horarios.hora);

        printf("Horario [Minuto/s].......... : ");
            scanf("%d", &compromissos[i].horarios.minuto);
        
        printf("Horario [Segundo/s].......... : ");
            scanf("%d", &compromissos[i].horarios.segundo);

    }

    printf("\n -- Exibindo na TELA -- \n");
    
    for(int i=0; i<TAM; i++)
    {
       printf("TEXTO.......... : %s", compromissos[i].texto);
       printf("\nDATA.........: %d/%d/%d", compromissos[i].datas.dia, compromissos[i].datas.mes, compromissos[i].datas.ano);
       printf("\nHorario: %d:%d:%d", compromissos[i].horarios.hora, compromissos[i].horarios.minuto, compromissos[i].horarios.segundo);

    }

    return 0;
}
