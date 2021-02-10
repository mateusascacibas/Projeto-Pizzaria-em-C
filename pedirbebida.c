#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

int pedirbebida(){
    int i = 0;
    int j = 0;
    int opcaobebida = 0;
    int opcaocomprar = 0;
    float preco;
    int a;
    int opcaoforma;
    float troco;
    int opcaooutro;

    printf("\n");


    while(bebida[i].codbeb != 0){
        if(bebida[i].codbeb == 999){

        }
        else{
        printf("%d", bebida[i].codbeb);
        printf("-");
        printf("%s", bebida[i].nome_bebida);
        printf("\n");

        }


        i++;

    }
    j = i+1;
    printf("%d", i+1);
    printf("-");
    printf("Sair");
    printf("\n");


    printf("Digite a opcao desejada \n");
    scanf("%d",&opcaobebida);
    i = opcaobebida - 1;

    if(opcaobebida != j){
            if(opcaobebida != 0){
                    if(opcaobebida < j){

        printf("Nome bebida: %s \n", bebida[i].nome_bebida);
        printf("Preco bebida: %.2f \n", bebida[i].preco_bebida);
        printf("Deseja realmente continuar \n");
        printf("1 - Sim \n");
        printf("2 - Não \n");
        scanf("%d",&opcaocomprar);
        }
            }}
            else{
                printf("Digite uma opção valida");
            }

        if(opcaocomprar != 2){
            venda[ven].registro = ven + 1;
            strcpy(venda[ven].nomevenda,bebida[ven].nome_bebida);
            venda[ven].preco_venda = bebida[i].preco_bebida;
            ven = ven +1;

            switch(opcaocomprar)
            {
            case 1:
            printf("Essas sao as formas de pagamentos:\n\n");
            printf("1 - Dinheiro\n");
            printf("2 - Cartao de credito\n");
            printf("3 - Cancelar pedido \n");
            printf("Selecione a forma de pagamento: \n");
            scanf("%d",&opcaoforma);

            if(opcaoforma != 3){

                switch(opcaoforma)
                {
                case 1:
                printf("Digite o valor que você tem em maos para a compra \n");
                scanf("%f", &troco);
                preco =  troco - bebida[i].preco_bebida ;
                fin[3].despesa = fin[3].despesa + precodeestoque;
                fin[3].receita = fin[3].receita + bebida[i].preco_bebida;


                if(troco < bebida[i].preco_bebida){

                    printf("Faltam %.2f reais para poder comprar \n\n", preco*(-1));
                }
                else if(troco > bebida[i].preco_bebida){

                    printf("Sera levado para voce o troco de %.2f reais \n\n", preco);
                }
                else{
                    printf("Okay \n\n");
                }


                system("pause");
                system("cls");
                printf("Deseja fazer outro pedido? \n");
                printf("1 - Sim \n");
                printf("2 - Não \n");
                scanf("%d", &opcaooutro);
                printf("\n");

                if(opcaooutro == 2)
                {

                }
                else if(opcaooutro == 1){
                    menubebida();
                }
                else{
                    printf("Digite um valor valido \n");
                }

                break;

                case 2:

                printf("Voce selecionou a opcao Cartao de Credito\n");
                 preco = bebida[i].preco_bebida;
                fin[3].despesa = fin[3].despesa + precodeestoque ;
                fin[3].receita = fin[3].receita + bebida[i].preco_bebida  + (bebida[i].preco_bebida * 0.01);
                printf("Sera subtraido do seu saldo o valor de: R$ %.2f + Taxas\n", preco);


                system("pause");
                system("cls");
                printf("Deseja fazer outro pedido? \n");
                printf("1 - Sim \n");
                printf("2 - Não \n");
                scanf("%d", &opcaooutro);
                printf("\n");

                if(opcaooutro == 2)
                {

                }
                else if(opcaooutro == 1){
                    menubebida();
                }
                else{
                    printf("Opção invalida \n");
                }
                break;

                default:
                printf("Opção invalida, continue \n");
                system("pause");
                menubebida();
                break;
                }


            }
              else{
            system("pause");
            system("cls");

            }

                break;

            }
            }

else{
            system("pause");
            system("cls");




            }}


