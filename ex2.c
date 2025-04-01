#include <stdio.h>

int main () {
    float raio, pi, pergunta, resultado;
    pi = 3.14;
    printf("Digite o valor do raio do circulo que deseja calcular: \n");
    printf("1 - Calcular o perimetro do circulo\n");
    printf("2 - Calcular a area do circulo\n");
    scanf("%f", &pergunta);
    if(pergunta == 1){
        printf("Qual é o raio do circulo que deseja calcular: ");
        scanf("%f", &raio);
        resultado = (2*pi)*raio;
        printf("O perimetro do seu circulo é: %.2f", resultado);
    } else if (pergunta == 2){
        printf("Qual é o raio do circulo que deseja calcular: ");
        scanf("%f", &raio);
        resultado = (raio * raio) * pi;
        printf("A area do seu circulo é: %.2f", resultado);
    } else {
        printf("Valor invalido");
    }
}
