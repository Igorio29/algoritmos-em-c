#include <stdio.h>

int main (){
    float catetoB, catetoC, hipotenusa;
    printf("Digite o cateto B");
    scanf("%f", &catetoB);
    printf("Digite o cateto C");
    scanf("%f", &catetoC);

    hipotenusa = sqrt(pow(catetoB, 2) + pow(catetoC, 2));
    printf("A sua hipotenusa é: %f", hipotenusa);
}
