#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"


void incsug(){
                if(suges[sug].registro ==  0){
                fflush(stdin);
                suges[sug].registro = sug+1;
                printf("Digite sua sugestão: \n");
                fgets(suges[sug].sugestoes,90,stdin);
                fflush(stdin);

                printf("Sugestão registrada com sucesso \n");
                sug++;

                system("pause");
                system("cls");
                }
                }
