#include <iostream>;
#include <locale.h>;

using namespace std;

/*
01) Fa�a um programa que leia a base (B) e a altura (A) de um ret�ngulo e calcule:
    a. O per�metro do ret�ngulo P=2*(B+A)
    b. A �rea do ret�ngulo A=B*A
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float b, a, perimetro, area;

    printf("Digite o valor da base: ");
    scanf("%f", &b);
    printf("Digite o valor da altura: ");
    scanf("%f", &a);

    perimetro = 2 * (a + b);
    area = b * a;

    printf("O per�metro �: ");
    printf("%1.2f\n", perimetro);

    printf("A �rea �: ");
    printf("%1.2f", area);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
