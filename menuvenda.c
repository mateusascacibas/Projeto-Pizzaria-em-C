#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

int menuvenda(){
    int i;

    for(i=0;venda[i].registro != 0;i++)
    {
        printf("Codigo da venda ");
        printf("%d", venda[i].registro);
        printf(" \n");
        printf("Produto de venda ");
        printf("%s", venda[i].nomevenda);
        printf(" \n");
        printf("Preço de venda ");
        printf("%.2f", venda[i].preco_venda);
        printf(" \n");

    }
    system("pause");
}
