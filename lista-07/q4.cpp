#include <iostream>
#include <locale.h>

using namespace std;

/*
4.Fa�a um programa que leia uma vari�vel e some 5 caso seja par ou some 8 caso
seja �mpar, imprimir o resultado desta opera��o.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("%d", (num + 5));
    } else {
        printf("%d", (num + 8));
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
