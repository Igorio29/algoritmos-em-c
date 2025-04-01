#include <stdio.h>

int main(){
    float portioli, fahrenheit;
    printf("Digite o valor em graus CELSIUS: ");
    scanf("%f", &portioli);
    fahrenheit = portioli * 1.8 + 32;
    printf("Esta fazendo %f fahrenheit", fahrenheit);
}
