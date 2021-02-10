
// ARQUIVO BD.C
#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "string.h"



typedef struct{
    int codcli;
    char nomecli[31],telcli[21];

}Cliente;

typedef struct{
    int codpiz;
    char nome_pizza[30];
    float preco_pizza;
}Pizza;

typedef struct{
    char nome_bebida[30];
    float preco_bebida;
    int codbeb;
}Bebida;

typedef struct{

    char nomevenda[31];
    int registro;
    float preco_venda;
}Venda;

typedef struct{
    int registro;
    char filial[31];
    float despesa;
    float receita;
}Financa;

typedef struct{
    int registro;
    char nome[31];
    float preco;
    float qtd;
}Estoque;



typedef struct{
   char nome[31];
   int registro;
   float senha;
   char cargo[21];
   float salario;
   char filial[21];
}Tfunc;

typedef struct{
    int registro;
    char reclamacoes[91];
    }Reclamacoes;

typedef struct{
    int registro;
    char sugestoes[91];
    }Sugestoes;

Tfunc fun[10];
Cliente cli[10];
Pizza pizza[10];
Venda venda[10];
Estoque est[10];
Financa fin[10];
Bebida bebida[10];
Sugestoes suges[10];
Reclamacoes recla[10];

float precodeestoque;
int sug;
int rec;
int ven;


void iniciabdcli()
{
    int i;
    for(i=0;i<10;i++)
    {
        if(i<5)
        {
            cli[i].codcli = i+1;
        }
        else
        {
            cli[i].codcli =0;
        }
    }
    strcpy(cli[0].nomecli,"Rogerio Silva");
    strcpy(cli[1].nomecli,"Aline Santos");
    strcpy(cli[2].nomecli,"Marcelo Souza");
    strcpy(cli[3].nomecli,"Daniela Silva");
    strcpy(cli[4].nomecli,"Carlos de Almeida");

    strcpy(cli[0].telcli,"(11)96458-4524");
    strcpy(cli[1].telcli,"(11)95478-1452");
    strcpy(cli[2].telcli,"(11)97563-5786");
    strcpy(cli[3].telcli,"(11)96555-1002");
    strcpy(cli[4].telcli,"(11)97542-2244");


}

void iniciabdpizza(){

     int i;
    for(i=0;i<10;i++)
    {
        if(i<5)
        {
            pizza[i].codpiz = i+1;
        }
        else
        {
            pizza[i].codpiz =0;
        }
    }

    strcpy(pizza[0].nome_pizza,"Calabresa");
    strcpy(pizza[1].nome_pizza,"Mussarela");
    strcpy(pizza[2].nome_pizza,"Portuguesa");
    strcpy(pizza[3].nome_pizza,"Frango com Catupiry");
    strcpy(pizza[4].nome_pizza,"Pepperoni");

    pizza[0].preco_pizza = 40;
    pizza[1].preco_pizza = 35;
    pizza[2].preco_pizza = 30;
    pizza[3].preco_pizza = 32;
    pizza[4].preco_pizza = 28;


}
void iniciabdbebida(){

     int i;
    for(i=0;i<10;i++)
    {
        if(i<5)
        {
            bebida[i].codbeb = i+1;
        }
        else
        {
            bebida[i].codbeb =0;
        }
    }

    strcpy(bebida[0].nome_bebida,"Guarana Jesus");
    strcpy(bebida[1].nome_bebida,"Dolly");
    strcpy(bebida[2].nome_bebida,"Pitu");
    strcpy(bebida[3].nome_bebida,"Del Valle");
    strcpy(bebida[4].nome_bebida,"Coca Cola");

    bebida[0].preco_bebida = 4;
    bebida[1].preco_bebida = 10;
    bebida[2].preco_bebida = 12;
    bebida[3].preco_bebida = 10;
    bebida[4].preco_bebida = 15;


}


void iniciabdfun()
{
    int i;
    for(i=0;i<10;i++)
    {
        if(i<5)
        {
            fun[i].registro = i+1;
        }
        else
        {
            fun[i].registro =0;
        }
    }
    strcpy(fun[0].nome,"Mateus Ascacibas");
    strcpy(fun[1].nome,"Igor Lansarotto");
    strcpy(fun[2].nome,"Andrezza Nascimento");
    strcpy(fun[3].nome,"Eduardo Dudu");
    strcpy(fun[4].nome,"Joyce Joy Joy");

    fun[0].senha = 1234;
    fun[1].senha = 1234;
    fun[2].senha = 1234;
    fun[3].senha = 1234;
    fun[4].senha = 1234;


    strcpy(fun[0].cargo,"Garçom");
    strcpy(fun[1].cargo,"Pizzaiolo");
    strcpy(fun[2].cargo,"Caixa");
    strcpy(fun[3].cargo,"Caixa");
    strcpy(fun[4].cargo,"Pizzaiolo");

    fun[0].salario = 875;
    fun[1].salario = 950;
    fun[2].salario = 750;
    fun[3].salario = 750;
    fun[4].salario = 950;

    strcpy(fun[0].filial,"Berrini");
    strcpy(fun[1].filial,"Morumbi");
    strcpy(fun[2].filial,"Vila Olimpia");
    strcpy(fun[3].filial,"Berrini");
    strcpy(fun[4].filial,"Morumbi");


}

void iniciabdest(){
    int i;
    for(i=0;i<10;i++)
    {
        if(i<5)
        {
            est[i].registro = i+1;
        }
        else
        {
            est[i].registro =0;
        }
    }
    strcpy(est[0].nome,"Tomate");
    strcpy(est[1].nome,"Frango");
    strcpy(est[2].nome,"Queijo");
    strcpy(est[3].nome,"Calabresa");
    strcpy(est[4].nome,"Massa");
    strcpy(est[5].nome,"Ovo");
    strcpy(est[6].nome,"Milho");
    strcpy(est[7].nome,"Molho");
    strcpy(est[8].nome,"Cebola");


    est[0].preco = 8.5;
    est[1].preco = 7.0;
    est[2].preco = 7.5;
    est[3].preco = 7.5;
    est[4].preco = 9.5;
    est[5].preco = 2.0;
    est[6].preco = 7.0;
    est[7].preco = 1.0;
    est[8].preco = 0.50;

    est[0].qtd = 100;
    est[1].qtd = 100;
    est[2].qtd = 100;
    est[3].qtd = 100;
    est[4].qtd = 100;
    est[5].qtd = 100;
    est[6].qtd = 100;
    est[7].qtd = 100;
    est[8].qtd = 100;
}

void iniciabdfin(){
    int i;
    for(i=0;i<10;i++)
    {
        if(i<5)
        {
            fin[i].registro = i+1;
        }
        else
        {
            fin[i].registro =0;
        }
    }

    strcpy(fin[0].filial,"Morumbi");
    strcpy(fin[1].filial,"Berrini");
    strcpy(fin[2].filial,"Vila Olimpia");
    strcpy(fin[3].filial,"Gerais");

    fin[0].despesa = 1300;
    fin[1].despesa = 1000;
    fin[2].despesa = 1400;
    fin[3].despesa = fin[0].despesa + fin[1].despesa + fin[2].despesa;

    fin[0].receita = 8500;
    fin[1].receita = 4000;
    fin[2].receita = 7300;
    fin[3].receita =  fin[0].receita + fin[1].receita + fin[2].receita;


}

