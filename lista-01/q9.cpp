#include <iostream>;
#include <locale.h>;

using namespace std;

/*
09) A revendedora de carros XYZ Ltda., paga a seus funcion�rios, um sal�rio m�nimo (considere R$
678,00), mais uma comiss�o de R$ 50,00 por carro vendido. Fa�a um programa que leia quantidade
de carros que o funcion�rio vendeu e calcule o sal�rio total do funcion�rio.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    #define SALARIO_MINIMO 678
    #define COMISSAO 50

    int qtd_vendas, salario_total;

    printf("N�mero de carros vendidos: ");
    scanf("%d", &qtd_vendas);

    salario_total = SALARIO_MINIMO + (qtd_vendas * COMISSAO);

    printf("O sal�rio total �: R$ %d", salario_total);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
