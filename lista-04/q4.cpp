#include <iostream>;
#include <locale.h>;

using namespace std;

/*
4. Faça um programa que receba 3 valores que representarão os lados de um
triângulo e verifique se os valores formam um triângulo e classifique esse triângulo
como:
- eqüilátero (3 lados iguais);
- isósceles (2 lados iguais);
- escaleno (3 lados diferentes).
Lembre-se que para formar um triângulo:
- nenhum dos lados pode ser igual a zero;
- um lado não pode ser maior do que a soma dos outros dois;
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float lado1, lado2, lado3;

    printf("Digite o lado 1: ");
    scanf("%f", &lado1);

    printf("Digite o lado 2: ");
    scanf("%f", &lado2);

    printf("Digite o lado 3: ");
    scanf("%f", &lado3);

    if (lado1 == 0 || lado2 == 0 || lado3 == 0){
        printf("Não é um triângulo pois um ou mais lados é(são) igual(is) a zero.");
    } else if (lado1 >= lado2 + lado3 || lado2 >= lado1 + lado2 || lado3 >= lado1 + lado2){
        printf("Não é um triângulo pois um lado é maior ou igual que a soma dos outros dois.");
    } else {
        if(lado1 == lado2 && lado2 == lado3){
            printf("O triâgulo é equilátero.");
        } else if (lado1 != lado2 && lado2 != lado3){
            printf("O triângulo é escaleno.");
        } else {
            printf("O triângulo é isósceles.");
        }
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
