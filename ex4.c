#include <stdio.h>

int main (){
    float peso1, peso2, nota1, nota2, resultado, repeticao;
    printf("BEM VINDO A CALCULADORA DE MEDIAS PONDERADAS SÓ QUE MELHORADA \n");
    printf("Digite o primeiro peso: ");
    scanf("%f", &peso1);
    printf("Digite o segundo peso:");
    scanf("%f", &peso2);
    printf("Muito bem agora vamos para as notas :)\n");
    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        resultado = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);
        printf("A media ponderada é: %.2f", resultado);
        printf("Deseja continuar com esses pesos? \n");
        printf("[1] SIM \n");
        printf("[2] NAO \n");
        scanf("%f", &repeticao);
    } while(repeticao == 1);
}
