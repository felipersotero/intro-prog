#include <iostream>;
#include <locale.h>;

using namespace std;

/*
5. Faça um programa que receba 3 valores e retorne o menor entre eles.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, menor;

    printf("Digite números inteiros diferentes entre si.\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 < num2){
        menor = num1;

    } else {
        menor = num2;
    }

    if (num3 < menor){
        menor = num3;
    }

    printf("O menor número é o %d.", menor);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
