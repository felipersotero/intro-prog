#include <iostream>
#include <locale.h>
#include <math.h>
#include <string>

using namespace std;

/*
6.OIMC��ndice de Massa Corporal � um crit�rio da Organiza��o Mundial de Sa�de
para dar uma indica��o sobre a condi��o de peso de uma pessoa adulta. A f�rmula
� IMC=peso/(altura)^2. Elabore um algoritmo que leia o peso e a altura de um
adulto e mostre sua condi��o de acordo com a tabela abaixo.

    IMC < 18,5   --- abaixo do peso
18,5 <= IMC < 25 --- peso normal
 25 <= IMC < 30  --- acima do peso
    30 <= IMC    --- obeso

*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float peso, altura, imc;
    string estado;

    printf("Utilize \",\" para separar os decimais.\n");

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (em m): ");
    scanf("%f", &altura);

    if (altura == 0){
        do{
            printf("Digite sua altura (em m), diferente de zero, por favor: ");
            scanf("%f", &altura);
        }
        while(altura == 0);
    }

    imc = (peso / (pow(altura, 2)));

    if (imc < 18.5){
        estado = "abaixo do peso";
    } else if (imc >= 18.5 && imc < 25){
        estado = "peso normal";
    } else if (imc >= 25 && imc < 30){
        estado = "acima do peso";
    } else if (imc >= 30){
        estado = "obeso";
    } else {
        printf("Dados inv�lidos para c�lculo do IMC.");
        return 0;
    }

    printf("Seu IMC � %1.2f e seu estado � %s.", imc, estado.c_str());

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
