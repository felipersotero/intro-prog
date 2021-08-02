#include <iostream>
#include <locale.h>

using namespace std;

/*
11.

VENDA                      COMISSÃO

>= 100.000                 700 + 16%
< 100.000 && >= 80.000     650 + 14%
< 80.000 && >= 60.000      600 + 14%
< 60.000 && >= 40.000      550 + 14%
< 40.000 && >= 20.000      500 + 14%
< 20.000                   400 + 14%
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float venda, comissao;

    printf("Digite o valor da venda mensal: ");
    scanf("%f", &venda);

    if(venda >= 100000){
        comissao = 700 + (venda * 0.16);
    } else if (venda < 100000 && venda >= 80000){
        comissao = 650 + (venda * 0.14);
    } else if (venda < 80000 && venda >= 60000){
        comissao = 600 + (venda * 0.14);
    } else if (venda < 60000 && venda >= 40000){
        comissao = 550 + (venda * 0.14);
    } else if (venda < 40000 && venda >= 20000){
        comissao = 500 + (venda * 0.14);
    } else {
        comissao = 400 + (venda * 0.14);
    }

    printf("A comissão será de R$%1.2f.", comissao);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
