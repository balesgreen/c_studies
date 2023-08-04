#include <stdio.h>

int main() {

    float fahrenheit;

    printf("Insira uma temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("O valor de %.1f fahrenheit em celsius é: %.1f\n", fahrenheit, celsius);

    return 0;
}