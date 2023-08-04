#include <stdio.h>
#include <math.h>

int main() {

    int base, height, area, perimeter;
    double diagonal;

    printf("Entre com o valor da base e altura: ");
    scanf("%i %i", &base, &height);

    // Calculando Área: base * altura = area
    area = base * height;
    printf("A área do retângulo é: %i\n", area);

    // Calculando Perímetro: perimeter = 2(base + height)
    perimeter = 2*(base + height);
    printf("O perímetro do retângulo é: %i\n", perimeter);

    // Calculando Diagonal: diagonal^2 = height^2 + base^2
    diagonal = sqrt(base * base + height * height);
    printf("A diagonal do retângulo é %.1lf\n", diagonal);

    return 0;
}