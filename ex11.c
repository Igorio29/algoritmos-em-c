#include <stdio.h>

int main() {
    float eleitores, brancos, nulos, validos;
    float porcBrancos, porcNulos, porcValidos;
    printf("Quantos eleitores votaram? ");
    scanf("%f", &eleitores);
    printf("Digite o valor de votos brancos: ");
    scanf("%f", &brancos);
    printf("Digite o valor de votos nulos: ");
    scanf("%f", &nulos);
    validos = eleitores - (brancos + nulos);
    porcBrancos = (brancos / eleitores) * 100;
    porcNulos = (nulos / eleitores) * 100;
    porcValidos = (validos / eleitores) * 100;
    printf("Foram as urnas o total de %i eleitores\n %.2f %% validaram os votos \n %.2f %% anularam os votos \n %.2f %% votaram em branco", eleitores, porcValidos, porcNulos, porcBrancos);
}
