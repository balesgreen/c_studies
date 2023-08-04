#include <stdio.h>

int main() {

    int val1, val2;

    printf("Insira dois valores: ");
    scanf("%i %i", &val1, &val2);

    int adicao = val1 + val2;
    int subtracao = val1 - val2;
    int multiplicacao = val1 * val2;
    float divisao = (float)val1 / val2;
    int modulo = val1 % val2;
    int potencia = val1 ^ val2;
    int negacao = -val1;
    int incremento = ++val1;
    int decremento = --val1;

    printf("Adição: %i\n", adicao);
    printf("Subtração: %i\n", subtracao);
    printf("Multiplicação: %i\n", multiplicacao);
    printf("Divisão: %.4f\n", divisao);
    printf("Módulo: %i\n", modulo);
    printf("Potência: %i\n", potencia);
    printf("Negação: %i\n", negacao);
    printf("Incremento: %i\n", incremento);
    printf("Decremento: %i\n", decremento);

    return 0;
}