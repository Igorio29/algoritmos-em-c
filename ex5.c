#include <stdio.h>

int main() {
    float refeicao, resultado;
    printf("Quanto voce pagou na sua refeicao: ");
    scanf("%f", &refeicao);
    resultado = refeicao * 0.1;
    printf("A comissao do gar�om e: %.2fR$, e o total a pagar e %.2f", resultado, resultado + refeicao);
}
