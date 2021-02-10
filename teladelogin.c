#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"


void teladelogin(){


    int r;
    float s;
    int i = 1;
    int j;


while(j != 1){

    printf("Digite seu registro: ");
    scanf("%d", &i);
    printf("Digite sua senha: ");
    scanf("%f", &s);
    if(i != 0){
            if(fun[i-1].registro == i){
                if(fun[i].senha == s){
                    printf("%s", fun[i-1].nome);
                    printf(" ");
                    printf("Logado \n");
                    j = 1;
                    system("pause");
                }
                            else{
                printf("Usuario e/ou senha incorretos \n");
                system("pause");
                system("cls");
            }

            }
            else{
                printf("Usuario e/ou senha incorretos \n");
                system("pause");
                system("cls");
            }


    }
    else{
                printf("Usuario e/ou senha incorretos \n");
                system("pause");
                system("cls");
            }
    }
}










