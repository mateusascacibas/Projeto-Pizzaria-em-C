
/* ARQUIVO EXbeb.C */
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

void exbeb()
{
    int fim;
    int i = 0;
    int encontrou,pos;
    encontrou=0;
    fim=0;
    printf("Digite o codigo da bebida que sera excluida: \n");
    scanf("%d", &i);


    // Analisa se ha posicao livre ou nao
    if(i<0)
    {
        printf("Digite um valor valido! \n\n");
        system("pause");
    }
    else
    {
        i = i-1;
        system("cls");
        printf("-----------------------------\n\n");
        printf("Registro.. :");
        printf("%d",bebida[i].codbeb);
        printf("\n");
        printf("Nome....:");
        printf("%s",bebida[i].nome_bebida);
        printf("\n");
        printf("Preço: ");
        printf("%.2f",bebida[i].preco_bebida);
        printf("\n");

    }
    printf("Deseja continuar? (1-S/2-N): ");
    scanf("%d", &fim);
    if(fim == 1){

    strcpy(bebida[i].nome_bebida, "");
    bebida[i].codbeb = 999;
    bebida[i].preco_bebida = 0;

    }
    }

