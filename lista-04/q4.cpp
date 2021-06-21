#include <iostream>;
#include <locale.h>;

using namespace std;

/*
4. Fa�a um programa que receba 3 valores que representar�o os lados de um
tri�ngulo e verifique se os valores formam um tri�ngulo e classifique esse tri�ngulo
como:
- eq�il�tero (3 lados iguais);
- is�sceles (2 lados iguais);
- escaleno (3 lados diferentes).
Lembre-se que para formar um tri�ngulo:
- nenhum dos lados pode ser igual a zero;
- um lado n�o pode ser maior do que a soma dos outros dois;
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
        printf("N�o � um tri�ngulo pois um ou mais lados �(s�o) igual(is) a zero.");
    } else if (lado1 >= lado2 + lado3 || lado2 >= lado1 + lado2 || lado3 >= lado1 + lado2){
        printf("N�o � um tri�ngulo pois um lado � maior ou igual que a soma dos outros dois.");
    } else {
        if(lado1 == lado2 && lado2 == lado3){
            printf("O tri�gulo � equil�tero.");
        } else if (lado1 != lado2 && lado2 != lado3){
            printf("O tri�ngulo � escaleno.");
        } else {
            printf("O tri�ngulo � is�sceles.");
        }
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
