#include <iostream>;
#include <locale.h>;

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int nh, hmes;

    printf("Digite o n�mero de horas trabalhadas por dia: ");
    scanf("%d", &nh);

    hmes = nh * 30;

    printf("O n�mero de horas trabalhadas em 30 dias � %d", hmes);

    return 0;
}
