#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
#define TAM 20

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
    srand(time(NULL));

    for(int i=0; i<TAM; i++)
    {   
        //Texto.......... : 
        strcpy(compromissos[i].texto, "Compromisso de teste gerado aleatoriamente."); // strcpy, necessario para alocar valores na string.

        //Data [Dia].......... 
        compromissos[i].datas.dia = 1 + (rand()% 20);

        //Data [Mes]..........
        compromissos[i].datas.mes = 1 + (rand()% 12);

        //Data [Ano]..........
        compromissos[i].datas.ano = 2016 + (rand()% 4);

        //Horario [Hora/s]..........
        compromissos[i].horarios.hora = rand()% 24;

        //Horario [Minuto/s]..........
        compromissos[i].horarios.minuto = rand()% 60;
        
        //Horario [Segundo/s]..........
        compromissos[i].horarios.segundo = rand()% 60;

    }

    printf("======== Lista de Compromissos ========");
    
    for(int i=0; i<TAM; i++)
    {
        printf("\nCompromisso %d:", i+1);
        printf("\nData: %d/%d/%d", compromissos[i].datas.dia, compromissos[i].datas.mes, compromissos[i].datas.ano);
        printf("\nHorario: %d:%d:%d", compromissos[i].horarios.hora, compromissos[i].horarios.minuto, compromissos[i].horarios.segundo);
        printf("\nTexto: %s\n", compromissos[i].texto);
    }

    return 0;
}