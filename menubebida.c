#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
#include "pedirbebida.c"
#include "exbeb.c"
#include "incbeb.c"



int menubebida(){


    int opcaocomprar=0;
    float troco;
    float preco;
    int opcaoforma=0;
    int desejacontinuar;
    int opcaooutro;

    int codcli,conf;
    int i,op,opc;
    op = 1;
    while(op!=5)
    {
        system("cls");
        printf("Menu de bebida\n");
        printf("-------------------------------\n\n");
        printf("1-Incluir bebida\n");
        printf("2-Consultar bebidas \n");
        printf("3-Excluir as bebidas \n");
        printf("4-Pedir bebida\n");
        printf("5-Sair \n");
        printf("Escolha sua opção: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
            incbeb();
            break;
            case 2:
            for (i=0;bebida[i].codbeb != 0;i++)
            {
                if(bebida[i].codbeb == 999){
                }
                else{
                printf("Nome....: %s\n", bebida[i].nome_bebida);
                printf("Preço....: %.2f\n", bebida[i].preco_bebida);

        }



            }
            system("pause");
            break;
            case 3:
            exbeb();
            system("pause");
            break;
            case 4:
            pedirbebida();
            break;
            case 5:
            break;
            default:
            printf("Opcao invalida");
            getch();
            break;
        }
    }}









