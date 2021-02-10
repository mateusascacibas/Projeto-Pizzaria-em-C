
/* ARQUIVO EXPIZ.C */
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

void expiz()
{
    int fim;
    int i = 0;
    int encontrou,pos;
    encontrou=0;
    fim=0;
    printf("Digite o codigo da pizza que sera excluida: \n");
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
        printf("%d",pizza[i].codpiz);
        printf("\n");
        printf("Nome....:");
        printf("%s",pizza[i].nome_pizza);
        printf("\n");
        printf("Preço: ");
        printf("%.2f",pizza[i].preco_pizza);
        printf("\n");

    }
    printf("Deseja continuar? (1-S/2-N): ");
    scanf("%d", &fim);
    if(fim == 1){

    strcpy(pizza[i].nome_pizza, "");
    pizza[i].codpiz = 999;
    pizza[i].preco_pizza = 0;

    }
    }

