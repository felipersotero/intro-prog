#include <iostream>;
#include <locale.h>;

using namespace std;

/*
3. Utilize a estrutura IF para fazer um programa que retorne o nome de um produto a
partir do código do mesmo. Considere os seguintes códigos:
- 1 -> Parafuso;
- 2 -> Porca;
- 3 -> Prego;
- Para qualquer outro código indicar -> Diversos.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int cod;

    printf("Digite o código do produto: ");
    scanf("%d", &cod);

    if(cod == 1){
        printf("Produto: PARAFUSO.");
    } else if (cod == 2){
        printf("Produto: PORCA.");
    } else if (cod == 3){
        printf("Produto: PREGO.");
    } else {
        printf("Produto: DIVERSOS.");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
