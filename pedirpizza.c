#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"

int pedirpizza(){
    int i = 0;
    int j = 0;
    int opcaopizza = 0;
    int opcaocomprar = 0;
    float preco;
    int opcaoforma;
    float troco;
    int opcaooutro;

    printf("\n");


    while(pizza[i].codpiz != 0){
        if(pizza[i].codpiz == 999){

        }
        else{
        printf("%d", pizza[i].codpiz);
        printf("-");
        printf("%s", pizza[i].nome_pizza);
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
    scanf("%d",&opcaopizza);
    i = opcaopizza - 1;

    if(opcaopizza != j){
            if(opcaopizza != 0){
                    if(opcaopizza < j){

        printf("Nome pizza: %s \n", pizza[i].nome_pizza);
        printf("Preco pizza: %.2f \n", pizza[i].preco_pizza);
        printf("Deseja realmente continuar \n");
        printf("1 - Sim \n");
        printf("2 - Não \n");
        scanf("%d",&opcaocomprar);
        switch (opcaopizza)
            {
            case 0:
            est[3].qtd = est[3].qtd - 1;
            est[0].qtd = est[0].qtd - 1;
            est[2].qtd = est[2].qtd - 1;
            est[7].qtd = est[7].qtd - 1;
            est[4].qtd = est[4].qtd - 1;
            est[8].qtd = est[8].qtd - 1;
            precodeestoque = est[3].preco + est[0].preco + est[2].preco + est[7].preco + est[4].preco + est[8].preco;
            break;
            case 1:
            est[0].qtd = est[0].qtd - 1;
            est[2].qtd = est[2].qtd - 1;
            est[7].qtd = est[7].qtd - 1;
            est[4].qtd = est[4].qtd - 1;
            precodeestoque = est[0].preco + est[2].preco + est[7].preco + est[4].preco;
            break;
            case 2:
            est[8].qtd = est[8].qtd - 1;
            est[0].qtd = est[0].qtd - 1;
            est[2].qtd = est[2].qtd - 1;
            est[4].qtd = est[4].qtd - 1;
            est[7].qtd = est[7].qtd - 1;
            est[5].qtd = est[5].qtd - 1;
            est[6].qtd = est[6].qtd - 1;
            break;
            case 3:
            est[0].qtd = est[0].qtd - 1;
            est[1].qtd = est[1].qtd - 1;
            est[2].qtd = est[2].qtd - 1;
            est[4].qtd = est[4].qtd - 1;
            est[6].qtd = est[6].qtd - 1;
            break;
        }
            }
            }
            else{
                printf("Digite uma opção valida");
            }

        if(opcaocomprar != 2){
            venda[ven].registro = ven + 1;
            strcpy(venda[ven].nomevenda,pizza[i].nome_pizza);
            venda[ven].preco_venda = pizza[i].preco_pizza;
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
                preco =  troco - pizza[i].preco_pizza ;
                fin[3].despesa = fin[3].despesa + precodeestoque;
                fin[3].receita = fin[3].receita + pizza[i].preco_pizza ;


                if(troco < pizza[i].preco_pizza){

                    printf("Faltam %.2f reais para poder comprar \n\n", preco*(-1));
                }
                else if(troco > pizza[i].preco_pizza){

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
                    menupizza();
                }
                else{
                    printf("Digite um valor valido \n");
                }

                break;

                case 2:

                printf("Voce selecionou a opcao Cartao de Credito\n");
                 preco = pizza[i].preco_pizza;
                fin[3].despesa = fin[3].despesa + precodeestoque ;
                fin[3].receita = fin[3].receita + pizza[i].preco_pizza  + (pizza[i].preco_pizza * 0.01) ;
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
                    menupizza();
                }
                else{
                    printf("Opção invalida \n");
                }
                break;

                default:
                printf("Opção invalida, continue \n");
                system("pause");
                menupizza();
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
        }
else{
            system("pause");
            system("cls");




            }
            }

