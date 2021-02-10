/* ARQUIVO INCPIZZA.C */
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

void incpiz()
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
                if(pizza[i].codpiz ==0)
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
        printf("Informe os dados da pizza \n");
        printf("-----------------------------\n\n");
        pizza[pos].codpiz = pos + 1;
        fflush(stdin);
        printf("Nome....:");
        fgets(pizza[pos].nome_pizza ,30,stdin);
        printf("Preço...:");
        scanf("%f", &pizza[pos].preco_pizza);


    }
    fflush(stdin);
    encontrou = 0;
    printf("Inclusão realizada com sucesso, \nDeseja realizar outra inclusão? (1-S/2-N): ");
    scanf("%d", &fim);

    }
}
