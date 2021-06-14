#include <iostream>;
#include <locale.h>;
#include <math.h>;

using namespace std;

/*
1. Ler 4 números e mostrar a média ponderada, sabendo-se que os pesos são
respectivamente: 1, 2, 3 e 4.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, media;

    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Nota 4: ");
    scanf("%f", &n4);

    media = (n1 + n2*2 + n3*3 + n4*4) / 10;

    printf("A média ponderada é: %1.2f.", media);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
