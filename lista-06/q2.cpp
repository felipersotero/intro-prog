#include <iostream>;
#include <locale.h>;

using namespace std;

/*
2. Entrar com o salário de uma pessoa e imprimir o desconto do INSS segundo a
tabela abaixo:
- menor ou igual a R$ 600,00 - isento
- maior que R$ 600,00 e menor ou igual a R$ 1200,00 - 20%
- maior que R$ 1200,00 e menor ou igual a R$2000,00 - 25%
- maior que R$ 2000,00 - 30%
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float salario, desconto;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (salario <= 600){
        printf("Isento de desconto do INSS.");
    } else {
        if (salario > 600 && salario <= 1200){
            desconto = salario * 0.2;
        } else if (salario > 1200 && salario <=2000){
            desconto = salario * 0.25;
        } else {
            desconto = salario * 0.3;
        }
        printf("O desconto do INSS é de R$ %1.2f", desconto);
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
