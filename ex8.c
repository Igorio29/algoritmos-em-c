#include <stdio.h>

int main(){
    float dolar = 5.02, euro = 5.37, libra = 5.92, peso = 0.079;
    float valor, convertido, moeda;
    printf("Em qual moeda deseja fazer a conversao \n");
    printf("[1] - DOLAR\n");
    printf("[2] - EURO\n");
    printf("[3] - LIBRA\n");
    printf("[4] - PESOS\n");
    printf("[5] - TODOS\n");
    scanf("%f", &moeda);
    printf("Digite o valor em reais: ");
    scanf("%f", &valor);
    if (moeda == 1){
        convertido = valor/dolar;
        printf("O valor em dolares é: %f", convertido);
    } else if (moeda == 2){
        convertido = valor/euro;
        printf("O valor em euros é: %f", convertido);
    } else if (moeda == 1){
        convertido = valor/libra;
        printf("O valor em libras é: %f", convertido);
    } else if (moeda == 1){
        convertido = valor/peso;
        printf("O valor em pesos é: %f", convertido);
    } else if (moeda == 1){
        printf("O valor em dolares é: %f", valor / dolar);
        printf("O valor em euros é: %f", valor / euro);
        printf("O valor em libras é: %f", valor / libra);
        printf("O valor em pesos é: %f", valor / peso);
    }
}
