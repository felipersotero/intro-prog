#include <iostream>;
#include <locale.h>;

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    float b, a, perimetro, area;

    printf("Digite o valor da base: ");
    scanf("%f", &b);
    printf("Digite o valor da altura: ");
    scanf("%f", &a);

    perimetro = 2 * (a + b);
    area = b * a;

    printf("O perímetro é: ");
    printf("%1.2f\n", perimetro);

    printf("A área é: ");
    printf("%1.2f", area);

    return 0;
}
