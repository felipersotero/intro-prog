#include <iostream>;
#include <locale.h>;

using namespace std;

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
