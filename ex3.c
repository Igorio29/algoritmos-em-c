#include <stdio.h>

int main() {
    float nota1, nota2, resultado;
    printf("BEM VINDO A CALCULADORA DE MEDIA PONDERADA\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    resultado = ((nota1 * 6) + (nota2 * 4)) / (6 + 4);
    printf("A media ponderada dessas notas é: %.2f", resultado);
}
