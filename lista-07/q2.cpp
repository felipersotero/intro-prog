#include <iostream>
#include <locale.h>

using namespace std;

/*
2.Fa�a um programa que leia dois valores inteiros A e B se os valores forem iguais
dever� se somar os dois, caso contr�rio multiplique A por B.
O resultado dever� ser impresso na tela.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (a == b){
        printf("%d", (a + b));
    } else {
        printf("%d", (a * b));
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
