#include "conio.h"
#include "stdio.h"


void funcaopagamento(){

    int opcaocomprar=0;
    float troco;
    float preco;
    int opcaoforma=0;
    int desejacontinuar;

        printf("Deseja realmente continuar \n");
        printf("1 - Sim \n");
        printf("2 - Não \n";)
        scanf("%d",&opcaocomprar);

        while(opcaocomprar != 2){
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
            printf("Digite o valor que você tem em mãos para a compra \n");
            scanf("%f", &troco);
            preco = troco + pizza[0].preco_pizza;
            fin[3].despesa = fin[3].despesa + precodeestoque;
            fin[3].receita = fin[3].receita + preco;
            printf("your mother");



            if(troco < pizza[0].preco_pizza){
                printf("Faltam %.2f reais para poder comprar \n\n", preco);
            }
            else if(troco > pizza[0].preco_pizza){
                printf("Será levado para voce o troco de %.2f reais \n\n", preco);
            }
            else{
                printf("Okay \n\n");
            }
            system("pause");
            system("cls");
            printf("Deseja fazer outro pedido? \n");
            printf("1 - Sim \n");
            printf("2 - Não \n");
            scanf("%d", &opcaocomprar);
            if(opcaocomprar == 2)
            {
                printf("Okay \n");
                opcaocomprar = 2;
                system("pause");
                system("cls");
            }
            else if(opcaocomprar == 1){
                pedirpizza();
            }
            else{
                printf("Valido porra");



            break;

            case 2:
            printf("Voce selecionou a opcao Cartao de Credito\n");
            printf("Sera substraido do seu saldo o valor de: R$%.2f + Taxas\n",precoqueijo);
            saldo=saldo-(precoqueijo+5);
            printf("Seu saldo atualmente: %.2f\n",saldo);
            system("pause");
            system("cls");
            printf("Deseja fazer outro pedido? \n");
            printf("1 - Sim \n");
            printf("2 - Não \n");
            scanf("%d", &opcaocomprar);
            if(opcaocomprar == 2)
            {
                printf("Okay \n");
                opcaocomprar = 2;
                system("pause");
                system("cls");
            }
            else if(opcaocomprar == 1){
                pedirpizza();
            }
            else{
                printf("Valido porra");
            }


            }
            break;

            default:
            printf("Opção invalida, continue \n");
            system("pause");
            pedirpizza();


            break;
            break;

            }
            }
            else{
            opcaocomprar = 2;
        }
        }

        }
        }

