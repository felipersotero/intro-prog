#include <iostream>;
#include <locale.h>;

using namespace std;

/*
5. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo
de fábrica, e depois a percentagem do distribuidor sobre o resultado). Supondo que a
percentagem do distribuidor seja de 28% e os impostos 45%. Escrever um algoritmo que
leia o custo de fábrica de um carro e informe o custo ao consumidor do mesmo
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    #define IMPOSTO 0.45
    #define DISTRIBUIDOR 0.28

    float c_fabrica, c_imposto, c_consumidor;

    printf("Digite o custo de fábrica: ");
    scanf("%f", &c_fabrica);

    c_imposto = c_fabrica + (c_fabrica * IMPOSTO);
    c_consumidor = c_imposto + (c_imposto * DISTRIBUIDOR);

    printf("O valor a ser pago pelo consuimdor é de R$ %1.2f!", c_consumidor);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
