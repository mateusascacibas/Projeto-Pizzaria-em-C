#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"
#include "locale.h"
#include "incsug.c"
#include "increc.c"

void menuopinioes(){

    int i = 0;
    int op;

    while(op != 5){
        system("cls");
        printf("Escolha \n");
        printf("1 - Registrar Reclama��es \n");
        printf("2 - Registrar Sugest�es \n");
        printf("3 - Consultar reclama��es \n");
        printf("4 - Consultar sugest�es \n");
        printf("5 - Sair \n");
        fflush(stdin);
        scanf("%d", &op);

        switch(op){
        case 1:
        increc();
        break;
        case 2:
        incsug();
        break;
        case 3:

            for (i=0;recla[i].registro != 0;i++)
            {
                if(recla[i].registro == 999){
                }
                else{
                printf("Registro..: %d\n", recla[i].registro);
                printf("Reclama��o....: %s\n", recla[i].reclamacoes);
            }
            }
            system("pause");
        break;
        case 4:

            for (i=0;suges[i].registro != 0;i++)
            {
                if(suges[i].registro == 999){
                }
                else{
                printf("Registro..: %d\n", suges[i].registro);
                printf("Sugest�o....: %s\n", suges[i].sugestoes);

            }
            }
            system("pause");
            break;
            default:
            printf("Digite uma op��o valida");
            break;



        }
    }
}

