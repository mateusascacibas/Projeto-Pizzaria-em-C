/* ARQUIVO EXEST.C */
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

void exest()
{
    int fim;
    int i = 0;
    int encontrou,pos;
    encontrou=0;
    fim=0;
    printf("Digite o registro do produto que sera excluido: \n");
    scanf("%d", &i);

    // Analisa se ha posicao livre ou nao
    if(i<=0)
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
        printf("%d",est[i].registro);
        printf("\n");
        printf("Nome....:");
        printf("%s",est[i].nome);
        printf("\n");
        printf("Preço: ");
        printf("%.2f",est[i].preco);
        printf("\n");
        printf("Quantidade: ");
        printf("%.2f",est[i].qtd);
        printf("\n");
    }
    printf("Deseja continuar? (1-S/2-N): ");
    scanf("%d", &fim);
    if(fim == 1){

    strcpy(est[i].nome, "");
    est[i].registro = 999;
    est[i].preco = 0;
    est[i].qtd = 0;

    }
    }

