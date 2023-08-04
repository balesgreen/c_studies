#include <stdio.h>

int main() {
    
    float celsius;

    printf("Insira uma temperatura em celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = celsius * 9.0 / 5.0 + 32;

    printf("O valor de %.1f celsius em fahrenheit é %.1f \n", celsius, fahrenheit);

    return 0;
}