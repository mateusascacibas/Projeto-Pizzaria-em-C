/* ARQUIVO INCBEBIDA.C */
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

void incbeb()
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
                if(bebida[i].codbeb ==0)
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
        printf("Informe os dados da bebida \n");
        printf("-----------------------------\n\n");
        bebida[pos].codbeb = pos + 1;
        fflush(stdin);
        printf("Nome....:");
        fgets(bebida[pos].nome_bebida ,30,stdin);
        printf("Preço...:");
        scanf("%f", &bebida[pos].preco_bebida);
        \

    }
    fflush(stdin);
    encontrou = 0;
    printf("Inclusão realizada com sucesso, \nDeseja realizar outra inclusão? (1-S/2-N): ");
    scanf("%d", &fim);

    }
}
