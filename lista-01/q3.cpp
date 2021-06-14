#include <iostream>;
#include <locale.h>;

using namespace std;

/*
03) Faça um programa que leia A, B e C e calcule o resultado das seguintes fórmulas:
    a. (5*C+12*B) *A
    b. ((2*A)-B)*C
    c. (5+A)-(B*C)
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    float a, b, c, form1, form2, form3;

    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    form1 = (5*c + 12*b)*a;
    form2 = ((2*a)-b)*c;
    form3 = (5+a)-(b*c);

    printf("%1.1f\n", form1);
    printf("%1.1f\n", form2);
    printf("%1.1f\n", form3);

    return 0;
}

//Felipe Rafael Sotero dos Santos - 2021.1
