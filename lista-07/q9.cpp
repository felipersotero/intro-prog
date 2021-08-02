#include <iostream>
#include <locale.h>

using namespace std;

/*
9. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não
se aposentar. As condições para aposentadoria são
- Ter pelo menos 65 anos,
- Ou ter trabalhado pelo menos 30 anos,
- Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int idade, t_trabalho;
    bool aposentar = false;

    //Input de dados

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a quantidade de anos trabalhados: ");
    scanf("%d", &t_trabalho);

    //Verificando situação

    if(idade >= 65){
        aposentar = true;
    } else {
        if(idade >= 60){
            if(t_trabalho >= 25){
                aposentar = true;
            }
        } else{
            if(t_trabalho >= 30){
                aposentar = true;
            }
        }
    }

    //Output do resultado

    if(aposentar){
        printf("Pode se aposentar. Aleluia aleluia!");
    } else{
        printf("Não pode se aposentar.");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
