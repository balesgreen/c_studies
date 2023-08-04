#include <stdio.h>
#include <math.h>

int main() {

    float radius, area;
    const float pi = 3.14;

    printf("Digite um valor para área: ");
    scanf("%f", &radius);

    area = pi * pow(radius, 2);

    printf("O valor da área é: %.2f \n", area);

    return 0;
}