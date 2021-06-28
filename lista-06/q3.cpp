#include <iostream>;
#include <locale.h>;
#include <string>

using namespace std;

/*
3. Ler a idade de um nadador classifica-o em uma das seguintes categorias:
-infantil A = 5 - 7 anos
-infantil B = 8-10 anos
-juvenil A = 11-13 anos
-juvenil B = 14-17 anos
-adulto = maiores de 18 anos
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int idade;
    string categoria;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7){
        categoria = "Infantil A";
    } else if (idade >= 8 && idade <= 10){
        categoria = "Infantil B";
    } else if (idade >= 11 && idade <= 13){
        categoria = "Juvenil A";
    } else if (idade >= 14 && idade <= 17){
        categoria = "Juvenil B";
    } else if (idade >= 18){
        categoria = "Adulto";
    } else {
        categoria = "Sem categoria";
    }

    printf("A categoria do nadador é: %s", categoria.c_str());

    //cout << "A categoria do nadador é: " << categoria << endl;

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
