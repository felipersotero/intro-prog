#include <iostream>;
#include <locale.h>;

using namespace std;

/*
1. Leia a velocidade máxima permitida em uma avenida e a velocidade com que o
motorista estava dirigindo nela e calcule a multa que uma pessoa vai receber,
sabendo que são pagos:
a) 50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade permitida
(ex.: velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h);
b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida.
c) 200 reais, se estiver acima de 31km/h da velocidade permitida.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int v_max, v_mot;

    printf("Digite a velocidade máxima permitida: ");
    scanf("%d", &v_max);

    printf("Digite a velocidade do motorista: ");
    scanf("%d", &v_mot);

    if (v_mot <= v_max){
        printf("Velocidade permitida.");
    } else if (v_mot > v_max && v_mot <= (v_max + 10)){
        printf("Acima da velocidade! Multa de R$50,00");
    } else if (v_mot > (v_max + 10) && v_mot <= (v_max + 30)){
        printf("Acima da velocidade! Multa de R$100,00");
    } else {
        printf("Acima da velocidade! Multa de R$200,00");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
