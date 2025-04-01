#include <stdio.h>

int main (){
    int dia, mes, ano, resultadodata1;
    printf("Digite uma data: \n");
    printf("Dia: ");
    scanf("%i", &dia);
    printf("Mes: ");
    scanf("%i", &mes);
    printf("Ano: ");
    scanf("%i", &ano);
    resultadodata1 = dia + (mes - 1*30) + (ano - 1 * 360);


    int dia2, mes2, ano2, resultadodata2;

    printf("Digite a segunda data: \n");
    printf("Dia: ");
    scanf("%i", &dia2);
    printf("Mes: ");
    scanf("%i", &mes2);
    printf("Ano: ");
    scanf("%i", &ano2);

    resultadodata2 = dia2 + (mes - 1*30) + (ano2 - 1 * 360);

    int resultadofinal = resultadodata2 - resultadodata1;

    printf("A diferença destas duas datas é %i dias.", resultadofinal);
}
