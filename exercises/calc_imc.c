#include <stdio.h>

int main() {
    
    float imc, height, weight;

    printf("Diga o seu peso e altura: ");
    scanf("%f %f", &weight, &height);

    imc = weight / (height * height);

    printf("O seu peso é: %.2f kg/m2\n", imc);

    return 0;
}