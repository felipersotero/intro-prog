#include <iostream>;
#include <locale.h>;

using namespace std;

/*
06) Escrever um programa para trocar o conteúdo de duas variáveis. Obs.: As variáveis devem ser lidas
com o scanf e devem ter o tipo int.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int var1, var_inter, var2;

    printf("var1: ");
    scanf("%d", &var1);
    printf("var2: ");
    scanf("%d", &var2);

    var_inter = var2;
    var2 = var1;
    var1 = var_inter;

    printf("var1: %d\n", var1);
    printf("var2: %d", var2);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
