#include <iostream>;
#include <locale.h>;

using namespace std;

/*
08) Fazer um programa que converta um intervalo de tempo dado em segundos para horas, minutos e
segundos. Por exemplo, se o tempo dado for 3850 segundos, o programa deverá fornecer 1h 4 min 10s.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int segundos, minutos, horas;

    printf("Tempo em segundos: ");
    scanf("%d", &segundos);

    minutos = 0;
    horas = 0;

    if (segundos >= 60){

        while(segundos >= 60){
            minutos = minutos + 1;
            segundos = segundos - 60;
        }
    }

    if (minutos >= 60){

        while(minutos >= 60){
            horas = horas + 1;
            minutos = minutos - 60;
        }
    }

    printf("%dh %dmin %ds", horas, minutos, segundos);

    return 0;
}
