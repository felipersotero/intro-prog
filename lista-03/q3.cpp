#include <iostream>;
#include <locale.h>;
#include <math.h>;

using namespace std;

/*
3. Calcule e mostre a área de um triângulo (área é igual a (base x altura) dividido por 2)
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float b, h, a;

    printf("Base do triângulo: ");
    scanf("%f", &b);

    printf("Altura do triângulo: ");
    scanf("%f", &h);

    a = (b * h) / 2;

    printf("A área do triângulo é %1.2f.", a);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
