#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
#include "pedirpizza.c"
#include "incpiz.c"
#include "expiz.c"


int menupizza(){


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
        printf("Menu de Pizza\n");
        printf("-------------------------------\n\n");
        printf("1-Incluir pizza\n");
        printf("2-Consultar sabores \n");
        printf("3-Excluir em sabores \n");
        printf("4-Pedir pizza\n");
        printf("5-Sair \n");
        printf("Escolha sua opção: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
            incpiz();
            break;
            case 2:
            for (i=0;pizza[i].codpiz != 0;i++)
            {
                if(pizza[i].codpiz == 999){
                }
                else{
                printf("Nome....: %s\n", pizza[i].nome_pizza);
                printf("Preço....: %.2f\n", pizza[i].preco_pizza);
                }



            }
            system("pause");
            break;
            case 3:
            expiz();
            system("pause");
            break;
            case 4:
            pedirpizza();
            break;
            case 5:
            break;
            default:
            printf("Opcao invalida");
            getch();
            break;
        }
    }}









