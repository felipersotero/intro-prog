#include <iostream>;
#include <locale.h>;

using namespace std;

/*
4.Escreva um programa que verifique se um ano inserido pelo usuário é bissexto ou não.
Sabe-se que o ano bissexto é aquele que é múltiplo de 4,exceto os múltiplos de 100 que
não sejam múltiplos de 400.
Por exemplo:1996,2004,2008,2012,1600, 2000 e 2400 (são bissextos); 1700, 1800, 1900e 2100 (não são bissextos).
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0){
        if (ano % 100 == 0 && ano % 400 != 0){
            printf("Não é bissexto!");
        } else {
            printf("É bissexto!");
        }
    } else {
        printf("Não é bissexto!");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
