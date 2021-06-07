#include <iostream>;
#include <locale.h>;

using namespace std;

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
