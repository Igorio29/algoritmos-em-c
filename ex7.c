#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1linha, x2linha;
    printf("----------- CALCULADORA DE BHASKARA -------------- \n");
    printf("Digite o A: ");
    scanf("%f", &a);
    printf("Digite o B: ");
    scanf("%f", &b);
    printf("Digite o C: ");
    scanf("%f", &c);
    //calculo do delta
    delta = (b*b) - (4*a*c);
    printf("o seu delta e: %f \n", delta);
    if(delta < 0) {
        printf("Esta conta e impossivel pois o delta e menor que zero");
    } else if ( delta >= 0 ) {
        printf("Vamos continuar os calculos \n");
        //calculo da bhaskara
        x1linha = (-b + (sqrt(delta))) / (2*a);
        x2linha = (-b - (sqrt(delta))) / (2*a);
        printf("X' e %.2f \n", x1linha);
        printf("X'' e %.2f \n", x2linha);
    }
}
