#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

/*
7.Escreva um algoritmo que leia o n�mero de identifica��o, as 3 notas obtidas por
um alunon as 3 verifica��es e a m�dia dos exerc�cios que fazem parte da avalia��o,
e calcule a m�dia de aproveitamento, usando a f�rmula:

MA = (nota1 + nota2 * 2 + nota3 * 3 + ME)/7

Aatribui��o dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o n�mero
do aluno, suas notas, a m�dia dos exerc�cios,a m�dia de aproveitamento, o conceito
correspondente e a mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o
conceito for D ou E

MA             Conceito

>= 90             A
>= 75 e <90       B
>= 60 e < 75      C
>= 40 e < 60      D
< 40              E

*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int id;
    float nota1, nota2, nota3, me, ma;
    string conceito, resultado;

    //Recebendo os valores

    printf("ID do aluno: ");
    scanf("%d", &id);

    printf("Digite as notas a seguir (de 0 a 100).\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a m�dia dos exerc�cios: ");
    scanf("%f", &me);

    ma = ((nota1 + nota2*2 + nota3*3 + me)/7);

    //Verificando o conceito

    if (ma >= 90){
        conceito = "A";
    } else if (ma >= 75 && ma < 90){
        conceito = "B";
    } else if (ma >= 60 && ma < 75 ){
        conceito = "C";
    } else if (ma >= 40 && ma < 60){
        conceito = "D";
    } else{
        conceito = "E";
    }

    //Verificando a situa��o

    if (conceito == "A" || conceito == "B" || conceito == "B"){
        resultado = "APROVADO";
    } else{
        resultado = "REPROVADO";
    }

    //Exibindo para o usu�rio

    printf("\nID do aluno: %d\n\n", id);
    printf("Notas:\n");
    printf("    1: %1.2f\n", nota1);
    printf("    2: %1.2f\n", nota2);
    printf("    3: %1.2f\n", nota3);
    printf("    M�dia dos eerc�cios: %1.2f\n\n", me);
    printf("M�dia de aproveitamento: %1.2f\n\n", ma);
    printf("Conceito: %s\n", conceito.c_str());
    printf("Resultado: %s\n", resultado.c_str());

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
