#include <iostream>;
#include <locale.h>;
#include <math.h>;

using namespace std;

/*
3. Criar um aplicativo que calcule e apresente o valor do volume de uma lata de óleo, utilizando a
fórmula:
V = pi r2 h
onde r é o raio da base e h a altura, para pi use a aproximação 3,14.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    #define PI 3.14

    float r, h, v;

    printf("Digite o raio da base (em cm):");
    scanf("%f", &r);

    printf("Digite a altura da lata (em cm):");
    scanf("%f", &h);

    v = (PI * pow(r, 2) * h);

    printf("O volume da lata de óleo é %1.2f cm³.", v);

    return 0;
}
