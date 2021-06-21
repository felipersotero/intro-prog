#include <iostream>;
#include <locale.h>;

using namespace std;

/*
2. Faça um programa que verifique se um número é par.
Obs.: Um número é par quando o resto da divisão dele por 2 é igual a 0
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("O número é par!");
    } else {
        printf("O número é ímpar!");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
