#include <iostream>;
#include <locale.h>;

using namespace std;

/*
02) Fa�a um programa que leia cinco n�meros inteiros, calcule e escreva a soma, o produto e a m�dia
dos n�meros lidos.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, num4, num5, soma, produto;
    float media;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);
    printf("Digite o quarto n�mero: ");
    scanf("%d", &num4);
    printf("Digite o quinto n�mero: ");
    scanf("%d", &num5);

    soma = num1 + num2 + num3 + num4 + num5;
    produto = num1 * num2 * num3 * num4 * num5;
    media = (    soma = num1 + num2 + num3 + num4 + num5) / 5;

    printf("A soma dos n�meros �: %d\n", soma);
    printf("O produto dos n�meros �: %d\n", produto);
    printf("A m�dia dos n�meros �: %1.2f\n", media);

    return 0;
}
