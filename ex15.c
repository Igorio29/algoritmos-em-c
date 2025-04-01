#include <stdio.h>

int main () {
    float xicaraDeAcucar = 1.5 / 48, xicaraDeMateiga = 1.0 / 48, xicaraDeFarinha = 2.75 / 48 ;
    float acucarNec, manteigaNec, farinhaNec, cookie;
    printf("Cookie e bom\n");
    printf("Quantos cookies voce quer: ");
    scanf("%f", &cookie);
    acucarNec = cookie * xicaraDeAcucar;
    manteigaNec = cookie * xicaraDeMateiga;
    farinhaNec = cookie * xicaraDeFarinha;
    printf("Para produzir %f cookies sera necessario: \n %f xicaras de manteiga \n %f xicaras de acucar \n %f xicaras de farinhas",cookie, manteigaNec, acucarNec, farinhaNec);
}
