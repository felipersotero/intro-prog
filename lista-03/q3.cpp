#include <iostream>;
#include <locale.h>;
#include <math.h>;

using namespace std;

/*
3. Calcule e mostre a �rea de um tri�ngulo (�rea � igual a (base x altura) dividido por 2)
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float b, h, a;

    printf("Base do tri�ngulo: ");
    scanf("%f", &b);

    printf("Altura do tri�ngulo: ");
    scanf("%f", &h);

    a = (b * h) / 2;

    printf("A �rea do tri�ngulo � %1.2f.", a);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
