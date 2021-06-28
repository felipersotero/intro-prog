#include <iostream>;
#include <locale.h>;
#include <math.h>;

using namespace std;

/*
8.Desenvolva uma calculadora que realize 3 operações(+,-,*)sobre dois números quaisquer.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float num1, num2, soma, sub, prod;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    prod = num1 * num2;

    printf("\n%1.2f + %1.2f = %1.2f", num1, num2, soma);
    printf("\n%1.2f - %1.2f = %1.2f", num1, num2, sub);
    printf("\n%1.2f x %1.2f = %1.2f", num1, num2, prod);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
