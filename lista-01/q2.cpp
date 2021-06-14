#include <iostream>;
#include <locale.h>;

using namespace std;

/*
02) Faça um programa que leia cinco números inteiros, calcule e escreva a soma, o produto e a média
dos números lidos.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, num4, num5, soma, produto;
    float media;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    printf("Digite o quarto número: ");
    scanf("%d", &num4);
    printf("Digite o quinto número: ");
    scanf("%d", &num5);

    soma = num1 + num2 + num3 + num4 + num5;
    produto = num1 * num2 * num3 * num4 * num5;
    media = (    soma = num1 + num2 + num3 + num4 + num5) / 5;

    printf("A soma dos números é: %d\n", soma);
    printf("O produto dos números é: %d\n", produto);
    printf("A média dos números é: %1.2f\n", media);

    return 0;
}
