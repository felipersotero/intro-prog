#include <iostream>;
#include <locale.h>;

using namespace std;

/*
6.Verificar se um n�mero inteiro lido � divis�vel por 3 e por 5
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0){
        printf("� divis�vel por 3 e por 5");
    } else {
        printf("N�o � divis�vel por 3 e por 5");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
