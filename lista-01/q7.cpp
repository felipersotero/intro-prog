#include <iostream>;
#include <locale.h>;
#include <math.h>;

using namespace std;

/*
07) Dados os pontos A, de coordenadas A (x1, y1), e B de coordenadas (x2, y2), fazer um programa que
determine a distância entre os dois pontos.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float x1, y1, x2, y2, dist;

    //PONTO A

    printf("Coordenadas do ponto A\n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);

    //PONTO B

    printf("Coordenadas do ponto B\n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);

    //Distancia entre pontos

    dist = sqrt(pow((x2-x1),2) + pow(y2-y1,2));

    printf("Distância entre os pontos: %1.3f", dist);

    return 0;
}
