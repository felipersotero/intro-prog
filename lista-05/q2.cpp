#include <iostream>;
#include <locale.h>;

using namespace std;

/*
2. Fa�a um programa que verifique se um n�mero � par.
Obs.: Um n�mero � par quando o resto da divis�o dele por 2 � igual a 0
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("O n�mero � par!");
    } else {
        printf("O n�mero � �mpar!");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
