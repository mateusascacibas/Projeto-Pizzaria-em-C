#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"


void increc(){


                if(recla[rec].registro ==  0){
                fflush(stdin);
                recla[rec].registro = rec+1;
                printf("Digite sua reclamação: \n");
                fgets(recla[rec].reclamacoes,90,stdin);
                fflush(stdin);
                printf("Reclamação registrada com sucesso \n");
                rec++;

                system("pause");
                system("cls");
                }
}






