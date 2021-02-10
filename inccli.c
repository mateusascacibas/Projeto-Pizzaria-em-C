/* ARQUIVO INCCLI.C */
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

void inccli()
{
    int fim;
    int i,encontrou,pos;
    encontrou=0;
    fim=0;
    while(fim!=2)
    {
        // Procura a proxima posicao livre no vetor (codigo= 0)
        for (i=0;i<10;i++)
        {
            if(encontrou == 0)
            {
                if(cli[i].codcli ==0)
                {
                pos = i;
                encontrou = 1;
                }
                else
                {
                    pos = -1;
                }
            }
        }
    // Analisa se ha posicao livre ou nao
    if(pos<0)
    {
        printf("Nao ha posicao livre no vetor! \n\n");
        getch();
    }
    else
    {
        system("cls");
        printf("Informe os dados do cliente \n");
        printf("-----------------------------\n\n");
        cli[pos].codcli = pos + 1;
        fflush(stdin);
        printf("Nome....:");
        fgets(cli[pos].nomecli,30,stdin);
        printf("Telefone: ");
        fgets(cli[pos].telcli,20,stdin);
    }
    fflush(stdin);
    encontrou = 0;
    printf("Inclusão realizada com sucesso, \nDeseja realizar outra inclusão? (1-S/2-N): ");
    scanf("%d", &fim);
    }
}
