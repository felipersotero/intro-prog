#include <iostream>;
#include <locale.h>;

using namespace std;

/*
04) Construa um programa que leia o número de horas que um funcionário trabalha por dia (NH) e
calcule a quantidade de horas trabalhadas em 30 dias.
*/


int main(){

    setlocale(LC_ALL, "Portuguese");

    int nh, hmes;

    printf("Digite o número de horas trabalhadas por dia: ");
    scanf("%d", &nh);

    hmes = nh * 30;

    printf("O número de horas trabalhadas em 30 dias é %d", hmes);

    return 0;
}
