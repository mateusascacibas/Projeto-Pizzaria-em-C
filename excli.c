/* ARQUIVO EXCCLI.C */
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

void excli()
{
    int fim;
    int i = 0;
    int encontrou,pos;
    encontrou=0;
    fim=0;
    printf("Digite o codigo do cliente que sera excluido: \n");
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
        printf("Codigo.. :");
        printf("%d",cli[i].codcli);
        printf("\n");
        printf("Nome....:");
        printf("%s",cli[i].nomecli);
        printf("\n");
        printf("Telefone: ");
        printf("%s",cli[i].telcli);
        printf("\n");
    }
    printf("Deseja continuar? (1-S/2-N): ");
    scanf("%d", &fim);
    if(fim == 1){

    strcpy(cli[i].nomecli, "");
    cli[i].codcli = 999;
    strcpy(cli[i].telcli, "");

    }
    }

