#include <iostream>;
#include <locale.h>;

using namespace std;

/*
6. Fazer um programa que leia um n�mero positivo com tr�s algarismos e mostr�-lo
invertido. Exemplo: o n�mero 498 o inverso dele � 894
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, cen, dez, uni, inv;

    printf("Digite o n�mero (de, no m�ximo, tr�s algarismos): ");
    scanf("%d", &num);

    cen = num/100;
    dez = (num % 100) / 10;
    uni = (num % 100) % 10;

    inv = (uni * 100) + (dez * 10) + (cen * 1);

    printf("%d", inv);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
