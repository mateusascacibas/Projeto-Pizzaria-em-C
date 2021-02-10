// ARQUIVO MENUFIN.C
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"


void menufin()
{
    int codcli,conf;
    int i,op,opc;
    op = 1;
    while(op!=2)
    {
        system("cls");
        printf("Menu de Finança\n");
        printf("-------------------------------\n\n");
        printf("1-Consultar finança \n");
        printf("2-Menu principal\n\n");
        printf("Escolha sua opcao: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
            for (i=0;i<4;i++)
            {
                printf("Registro...: %d \n", fin[i].registro);
                printf("Filial....: %s\n", fin[i].filial);
                printf("Receita....: %.2f\n", fin[i].receita);
                printf("Despesa:... %.2f \n", fin[i].despesa);
                printf("Lucro:... %.2f \n\n", fin[i].receita - fin[i].despesa);
            }
            system("pause");
            break;
            case 2:
            break;
            default:
            printf("Opcao invalida");
            getch();
            break;
        }
    }
}


