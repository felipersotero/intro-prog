#include <iostream>;
#include <locale.h>;

using namespace std;

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
