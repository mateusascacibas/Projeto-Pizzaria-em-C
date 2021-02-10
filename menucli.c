// ARQUIVO MENUCLI.C
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
#include "inccli.c"
#include "excli.c"

void menucli()
{
    int codcli,conf;
    int i,op,opc;
    op = 1;
    while(op!=4)
    {
        system("cls");
        printf("Menu de Clientes\n");
        printf("-------------------------------\n\n");
        printf("1-Incluir Cliente \n");
        printf("2-Consultar Cliente \n");
        printf("3-Excluir Cliente \n");
        printf("4-Menu principal\n\n");
        printf("Escolha sua opcao: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
            inccli();
            break;
            case 2:
            for (i=0;cli[i].codcli != 0;i++)
            {
                if(cli[i].codcli == 999){
                }
                else{
                printf("Codigo..: %d\n", cli[i].codcli);
                printf("Nome....: %s\n", cli[i].nomecli);
                printf("Telefone: %s\n\n", cli[i].telcli);
            }
            }
            system("pause");
            break;
            case 3:
            excli();
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
