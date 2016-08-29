#include <stdio.h>

int main ()

{
    float valor;
    scanf("%f", &valor);
    printf("%.2f\n", valor + (valor*0.10));
    return 0;
}
