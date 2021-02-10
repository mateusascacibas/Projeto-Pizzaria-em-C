// ARQUIVO MENUEST.C
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
#include "incest.c"
#include "exest.c"

void menuest()
{
    int codcli,conf;
    int i,op,opc;
    op = 1;
    while(op!=4)
    {
        system("cls");
        printf("Menu de Estoque\n");
        printf("-------------------------------\n\n");
        printf("1-Incluir em estoque \n");
        printf("2-Consultar estoque \n");
        printf("3-Excluir em estoque \n");
        printf("4-Menu principal\n\n");
        printf("Escolha sua opcao: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
            incest();
            break;
            case 2:
            for (i=0;est[i].registro != 0;i++)
            {
                if(est[i].registro == 999){
                }
                else{
                printf("Registro...: %d \n", est[i].registro);
                printf("Nome....: %s\n", est[i].nome);
                printf("Preço....: %.2f\n", est[i].preco);
                printf("Quantidade:... %.2f \n\n", est[i].qtd);
            }
            }
            system("pause");
            break;
            case 3:
            exest();
            system("pause");
            break;
            case 4:
            break;
            default:
            printf("Opcao invalida");
            getch();
            break;
        }
    }
}

