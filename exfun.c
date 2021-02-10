/* ARQUIVO EXFUN.C */
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

void exfun()
{
    int fim;
    int i = 0;
    int encontrou,pos;
    encontrou=0;
    fim=0;
    printf("Digite o codigo do funcionario que sera excluido: \n");
    scanf("%d", &i);

    // Analisa se ha posicao livre ou nao
    if(i<=0)
    {
        printf("Digite um valor valido! \n\n");
        system("pause");
    }
    else
    {
        i = i - 1;
        system("cls");
        printf("-----------------------------\n\n");
        printf("Registro.. :");
        printf("%d",fun[i].registro);
        printf("\n");
        printf("Nome....:");
        printf("%s",fun[i].nome);
        printf("\n");
        printf("Filial: ");
        printf("%s",fun[i].filial);
        printf("\n");
        printf("Cargo: ");
        printf("%s",fun[i].cargo);
        printf("\n");
        printf("Salario: ");
        printf("%.2f",fun[i].salario);
        printf("\n");
    }
    printf("Deseja continuar? (1-S/2-N): ");
    scanf("%d", &fim);
    if(fim == 1){

    strcpy(fun[i].nome, "");
    fun[i].registro = 999;
    strcpy(fun[i].cargo, "");
    strcpy(fun[i].filial, "");
    fun[i].salario = 0;

    }
    }

