#include <iostream>
#include <locale.h>

using namespace std;

/*
10.O custo ao consumidor de um carro novo e a soma do custo de fábrica, da
comissão do distribuidor, e dos impostos. A comissão e os impostos são calculados
sobre o custo de fabrica, de acordo com a tabela abaixo. Leia o custo de fábrica e
escreva o custo ao consumidor.

CUSTO DE FÁBRICA                 % DO DISTRIBUIDOR      % DOS IMPOSTOS

até R$12.000,00                          5                  isento
entre R$12.000,00 e R$25.000,00          10                   15
acima de R$25.000,00                     15                   20
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float fabrica, consumidor;

    //Input de dados

    printf("Digite o custo de fábrica: ");
    scanf("%f", &fabrica);

    if(fabrica <= 12000){
        consumidor = fabrica * 1.05;
    } else if (fabrica > 12000 && fabrica <= 25000){
        consumidor = (fabrica * 1.10) * 1.15;
    } else{
        consumidor = (fabrica * 1.15) * 1.20;
    }

    printf("O custo para o consumidor é de R$%1.2f.", consumidor);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
