#include <stdio.h>

int main() {
    float refeicao, resultado, gorjeta;
    printf("Quanto voce pagou na sua refeicao: ");
    scanf("%f", &refeicao);
    printf("Qual a porcentagem que o garçom merece? ");
    scanf("%f", &gorjeta);
    resultado = refeicao / 100 * gorjeta;
    printf("A gorjeta do garçom e: %.2fR$, e o total a pagar e %.2f", resultado, resultado + refeicao);
}
