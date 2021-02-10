// ARQUIVO MENUFUNC.C
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
#include "incfun.c"
#include "exfun.c"

void menufunc()
{
    int codfun,conf;
    int i,op,opc;
    op = 1;
    while(op!=4)
    {
        system("cls");
        printf("Menu de Funcionarios\n");
        printf("-------------------------------\n\n");
        printf("1-Incluir funcionarios \n");
        printf("2-Consultar funcionarios \n");
        printf("3-Excluir funcionarios \n");
        printf("4-Menu principal\n\n");
        printf("Escolha sua opcao: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
            incfun();
            break;
            case 2:
            for (i=0;fun[i].registro != 0;i++)
            {
                if(fun[i].registro == 999){
                }
                else {
                printf("Registro...: %d \n", fun[i].registro);
                printf("Nome....: %s\n", fun[i].nome);
                printf("Cargo....: %s\n", fun[i].cargo);
                printf("Salario....: %.2f\n", fun[i].salario);
                printf("Unidade:... %s \n\n", fun[i].filial);
            }
            }
            system("pause");
            break;
            case 3:
            exfun();
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
