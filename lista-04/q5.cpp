#include <iostream>;
#include <locale.h>;

using namespace std;

/*
5. Fa�a um programa que receba 3 valores e retorne o menor entre eles.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, menor;

    printf("Digite n�meros inteiros diferentes entre si.\n");

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    if (num1 < num2){
        menor = num1;

    } else {
        menor = num2;
    }

    if (num3 < menor){
        menor = num3;
    }

    printf("O menor n�mero � o %d.", menor);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
