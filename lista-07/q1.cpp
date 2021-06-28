#include <iostream>
#include <locale.h>

using namespace std;

/*
1.Faça um programa que leia os valores A, B, C e imprima na tela
se a soma de A + B é menor que C
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if ((a + b) < c){
        printf("a + b é menor que c.");
    } else {
        printf("a + b é maior ou igual a c.");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
