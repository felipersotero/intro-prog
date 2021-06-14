#include <iostream>;
#include <locale.h>;

using namespace std;

/*
05) Leia 3 notas de um aluno e calcule a média desse aluno.
*/


int main(){

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("A média é: %1.2f", media);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
