#include <iostream>
#include <locale.h>

using namespace std;

/*
8. Leia a dist�ncia em Km e a quantidade de litros de gasolina consumidos por um
carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de
acordo com a tabela abaixo:

CONSUMO (Km/l)   MENSAGEM

menor que 8     " Venda o carro!"
entre 8 e 14    " Econ�mico"
maior que 14    "Super econ�mico"
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float distancia, gasolina, consumo;

    //Input de dados

    printf("Digite a dist�ncia (em km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros de gasolina gastos: ");
    scanf("%f", &gasolina);

    //Calculando o consumo

    consumo = distancia / gasolina;

    //Verificando a situa��o

    if(consumo < 8){
        printf("O carro est� fazendo %1.2f km/l. Venda-o!", consumo);
    } else if( consumo >= 8 && consumo < 14){
        printf("O carro est� fazendo %1.2f km/l. � econ�mico!", consumo);
    } else {
        printf("O carro est� fazendo %1.2f km/l. � super econ�mico!", consumo);
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
