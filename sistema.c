#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
#include "locale.h"

// Programa que contem os dados

#include "bd.c"

// Demais modulos do SISTEMA

#include "menucli.c"
#include "menupizza.c"
#include "menufunc.c"
#include "menuest.c"
#include "menufin.c"
#include "menubebida.c"
#include "menuopinioes.c"
#include "menuvenda.c"
#include "teladelogin.c"



void main(){
    setlocale(LC_ALL,"Portuguese");
    int op;
    op = 1;
    iniciabdcli();
    iniciabdpizza();
    iniciabdfun();
    iniciabdest();
    iniciabdfin();
    iniciabdbebida();


    teladelogin();

    while(op!=9)
    {
        system("cls");
        printf("Sistema de Pizzaria \n");
        printf("------------------------------ \n");
        printf("1-Menu de Clientes \n");
        printf("2-Menu de Pizzas \n");
        printf("3-Menu de Funcionarios\n");
        printf("4-Menu de Estoque\n");
        printf("5-Menu de Finanças\n");
        printf("6-Menu de Bebidas\n");
        printf("7-Menu de Vendas\n");
        printf("8-Menu de Opinioes\n");
        printf("9-Sair\n");
        printf("Escolha sua opcao: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
            menucli();
            break;
            case 2:
            menupizza();
            break;
            case 3:
            menufunc();
            break;
            case 4:
            menuest();
            break;
            case 5:
            menufin();
            break;
            case 6:
            menubebida();
            break;
            case 7:
            menuvenda();
            break;
            case 8:
            menuopinioes();
            break;
            case 9:
            break;
            default:
            printf("Opcao Invalida! \n");
            system("pause");
            break;
        }
    }
}
