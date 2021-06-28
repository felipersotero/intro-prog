#include <iostream>;
#include <locale.h>;

using namespace std;

/*
4.Escreva um programa que verifique se um ano inserido pelo usu�rio � bissexto ou n�o.
Sabe-se que o ano bissexto � aquele que � m�ltiplo de 4,exceto os m�ltiplos de 100 que
n�o sejam m�ltiplos de 400.
Por exemplo:1996,2004,2008,2012,1600, 2000 e 2400 (s�o bissextos); 1700, 1800, 1900e 2100 (n�o s�o bissextos).
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0){
        if (ano % 100 == 0 && ano % 400 != 0){
            printf("N�o � bissexto!");
        } else {
            printf("� bissexto!");
        }
    } else {
        printf("N�o � bissexto!");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
