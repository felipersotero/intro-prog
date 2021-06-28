#include <iostream>
#include <locale.h>

using namespace std;

/*
3.Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja
negativo, imprimindo o resultado.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num > 0){
        printf("%d", (2 * num));
    } else if (num < 0){
        printf("%d", (3 * num));
    } else {
        printf("O número digitado é zero.");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
