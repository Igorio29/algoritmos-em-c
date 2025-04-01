#include <stdio.h>

int main(){
    float metros, quilometros, resposta;
    printf("BEM VINDO A CALCULADORA DE KM E METROS\n");
    printf("1 - KM para Metros\n");
    printf("2 - Metros para KM\n");
    printf("Digite uma das opcoes acima: ");
    scanf("%f", &resposta);
    if(resposta == 1){
        printf("Digite uma distancia em quilometros: ");
        scanf("%f", &quilometros);
        metros = quilometros * 1000;
        printf("%.2fkm em metros é %.2f metros", quilometros, metros);
    } else if (resposta == 2) {
        printf("Digite uma distancia em metros: ");
        scanf("%f", &metros);
        quilometros = metros / 1000;
        printf("%.2fkm em metros é %.2f metros", metros, quilometros);
    } else {
        printf("Valor invalido");
    }
 return 0;
}
