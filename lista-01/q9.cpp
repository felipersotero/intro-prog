#include <iostream>;
#include <locale.h>;

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    #define SALARIO_MINIMO 678
    #define COMISSAO 50

    int qtd_vendas, salario_total;

    printf("N�mero de carros vendidos: ");
    scanf("%d", &qtd_vendas);

    salario_total = SALARIO_MINIMO + (qtd_vendas * COMISSAO);

    printf("O sal�rio total �: R$ %d", salario_total);

    return 0;
}
