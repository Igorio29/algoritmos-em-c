#include <stdio.h>

int main (){
    float km, valor, gasolinaGasta, valorGasto;
    printf("Quanto a viagem da em KM");
    scanf("%f", &km);
    printf("Quanto custa o litro de gasolina");
    scanf("%f, &valor");
    gasolinaGasta = km / 12;
    valorGasto = gasolinaGasta * valor;
    printf("Voce gastou o total de %f.2f litros de gasolina e isso lhe custa o %f.2fR$");
}
