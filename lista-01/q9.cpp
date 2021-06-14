#include <iostream>;
#include <locale.h>;

using namespace std;

/*
09) A revendedora de carros XYZ Ltda., paga a seus funcionários, um salário mínimo (considere R$
678,00), mais uma comissão de R$ 50,00 por carro vendido. Faça um programa que leia quantidade
de carros que o funcionário vendeu e calcule o salário total do funcionário.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    #define SALARIO_MINIMO 678
    #define COMISSAO 50

    int qtd_vendas, salario_total;

    printf("Número de carros vendidos: ");
    scanf("%d", &qtd_vendas);

    salario_total = SALARIO_MINIMO + (qtd_vendas * COMISSAO);

    printf("O salário total é: R$ %d", salario_total);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
