#include <iostream>;
#include <locale.h>;

using namespace std;

/*
4. Calcule o valor de uma presta��o em atraso, utilizando a f�rmula:
PRESTA��O = VALOR + (VALOR * (TAXA/100) * TEMPO).
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float prest, valor, taxa, tempo;

    printf("Digite o valor da presta��o: ");
    scanf("%f", &valor);

    printf("Digite a taxa (em %%/dia): ");
    scanf("%f", &taxa);

    printf("Digite o atraso (em dias): ");
    scanf("%f", &tempo);

    prest = valor + (valor * (taxa/100) * tempo);

    printf("O valor da presta��o com atraso � de R$ %1.2f.", prest);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
