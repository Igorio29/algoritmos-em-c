#include <stdio.h>
#include <math.h>
int main(){

    float x1, x2, y1, y2, resultado;

    printf("Digite o x1: ");
    scanf("%f", &x1);
    printf("Digite o x2: ");
    scanf("%f", &x2);
    printf("Digite o y1: ");
    scanf("%f", &y1);
    printf("Digite o y2: ");
    scanf("%f", &y2);

    resultado = pow(x2 - x1,2) + pow(y2 - y1,2);
    printf("%f", resultado);
}
