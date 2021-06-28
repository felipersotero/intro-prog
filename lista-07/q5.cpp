#include <iostream>
#include <locale.h>

using namespace std;

/*
5.Escreva um programa que leia três valores inteiros
e diferentes e mostre-os em ordem decrescente.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b, c, maior, meio, menor;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &c);

    maior = a;

    if(b > maior && b > c){
        maior = b;
        meio = a;

        if(c > meio){
            meio = c;
            menor = a;
        } else{
            menor = c;
        }
    } else if (c > maior && c > b){
        maior = c;
        meio = a;

        if (b > meio){
            meio = b;
            menor = a;
        } else{
            menor = b;
        }
    } else{
        meio = b;
        if (c > meio){
            meio = c;
            menor = b;
        } else{
            menor = c;
        }
    }

    printf("Em ordem decrescente: %d, %d, %d", maior, meio, menor);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
