#include <iostream>;
#include <locale.h>;

using namespace std;

/*
6. Fazer um programa que leia um número positivo com três algarismos e mostrá-lo
invertido. Exemplo: o número 498 o inverso dele é 894
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num, cen, dez, uni, inv;

    printf("Digite o número (de, no máximo, três algarismos): ");
    scanf("%d", &num);

    cen = num/100;
    dez = (num % 100) / 10;
    uni = (num % 100) % 10;

    inv = (uni * 100) + (dez * 10) + (cen * 1);

    printf("%d", inv);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
