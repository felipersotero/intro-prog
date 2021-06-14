#include <iostream>;
#include <locale.h>;
#include <math.h>;

using namespace std;

/*
2. Ler o saldo de uma aplicação e imprimir o novo saldo, considerado o reajuste de 1%.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    #define JUROS 0.01

    float saldo, novo_saldo;

    printf("Insira o saldo inicial: ");
    scanf("%f", &saldo);

    novo_saldo = saldo + (saldo * JUROS);

    printf("O saldo reajustado é de R$ %1.2f.", novo_saldo);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
