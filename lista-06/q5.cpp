#include <iostream>;
#include <locale.h>;

using namespace std;

/*
5.Ler uma letra e escrever na tela se essa letra � ou n�o uma vogal
Obs.:Para isso use o tipo de dados c,e o scanf(�%s�,&nome_da_variavel);.
Obs,para fazer compara��es usando char, deve-se colocar a letra aser testada entre aspas.
Ex. If (var =='a'){ ....
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("� uma vogal!");
    } else {
        printf("� uma consoante!");
    }

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
