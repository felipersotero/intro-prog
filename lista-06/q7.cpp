#include <iostream>;
#include <locale.h>;
#include <math.h>;

using namespace std;

/*
7.Escreva um programa para verificar se um tri‚ngulo de lados de comprimentos
dados È ret‚ngulo,exibindo, nos casos afirmativos,sua hipotenusa e seus catetos.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float lado1, lado2, lado3, hip, cat1, cat2;

    printf("Digite valores diferentes de zero para os lados do tri‚ngulo.\n");

    //Recebendo valores do lado do tri‚ngulo

    printf("Digite o primeiro lado do tri‚ngulo: ");
    scanf("%f", &lado1);

    printf("Digite o segundo lado do tri‚ngulo: ");
    scanf("%f", &lado2);

    printf("Digite o terceiro lado do tri‚ngulo: ");
    scanf("%f", &lado3);

    //Verificando se h· algum lado maior que a soma dos outros dois

    if (lado1 >= (lado2 + lado3) || lado2 >= (lado1 + lado3) || lado3 >= (lado1 + lado2)){

        printf("N„o È um tri‚ngulo.");
        return 0;

    //Se os lados forem iguais, n„o È um tri‚ngulo ret‚ngulo
    } else if (lado1 == lado2 && lado2 == lado3){

        printf("N„o È um tri‚ngulo ret‚ngulo!");
        return 0;

    } else {

        //Verificando quais lados s„o hipotenusa (maior) e catetos (menores)
        if (lado1 > lado2 && lado1 > lado3){
            hip = lado1;
            cat1 = lado2;
            cat2 = lado3;
        } else if (lado2 > lado1 && lado2 > lado3){
            hip = lado2;
            cat1 = lado1;
            cat2 = lado3;
        } else {
            hip = lado3;
            cat1 = lado1;
            cat2 = lado2;
        }

        //Verificando se os lados obedecem ao Teorema de Pit·goras
        if ( pow(hip, 2) == pow(cat1, 2) + pow(cat2, 2) ){
            printf("\n… um tri‚ngulo ret‚ngulo\n");
            printf("Hipotenusa: %1.2f\nCateto: %1.2f\nCateto: %1.2f", hip, cat1, cat2);
        } else {
            printf("N„o È um tri‚ngulo ret‚ngulo!");
        }
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
