#include <iostream>;
#include <locale.h>;

using namespace std;

/*
1. Fa�a um programa que receba 2 valores e retorne o menor entre eles.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int val1, val2;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &val1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &val2);

    if (val1 < val2){
        printf("O n�mero %d � o menor.", val1);
    } else if (val1 > val2){
        printf("O n�mero %d � o menor.", val2);
    } else {
        printf("Os n�meros s�o iguais.");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
