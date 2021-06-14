#include <iostream>;
#include <locale.h>;
#include <math.h>;

using namespace std;

/*
1. Dados os comprimentos dos lados de um triangulo (lado1 e lado2), fazer um programa para
calcular a hipotenusa.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float cat1, cat2, hip;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cat1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cat2);

    hip = sqrt(pow(cat1,2) + pow(cat2,2));

    printf("A hipotenusa vale %1.2f.", hip);

    return 0;
}
