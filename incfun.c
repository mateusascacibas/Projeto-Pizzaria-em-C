/* ARQUIVO INCFUN.C */
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

void incfun()
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
                if(fun[i].registro ==0)
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
        printf("Informe os dados do funcionario \n");
        printf("-----------------------------\n\n");
        fun[pos].registro = pos + 1;
        fflush(stdin);
        printf("Nome....:");
        fgets(fun[pos].nome,30,stdin);
        printf("Cargo: ");
        fgets(fun[pos].cargo,20,stdin);
        printf("Filial: ");
        fgets(fun[pos].filial,20,stdin);
        printf("Salario: ");
        scanf("%f", &fun[pos].salario);

    }
    fflush(stdin);
    encontrou = 0;
    printf("Inclusão realizada com sucesso, \nDeseja realizar outra inclusão? (1-S/2-N): ");
    scanf("%d", &fim);
    }
}
