// Operador & -> Obtem o endereço de memória da variável que armazenará a informação passada pelo scanf().
// Lemrando que a função scanf() é passiva de Buffer Overflow (vulnerabilidade de segurança).

#include <stdio.h>

int main() {
    int num1,num2;

    printf("Entre com dois valores: \n");
    scanf("%i%i", &num1, &num2);

    printf("Endereço da num1: %p | Endereço da num2: %p\n", &num1, &num2);

    int mult = num1 * num2;
    float div = (float)num1 / num2;
    int soma = num1 + num2;
    int sub = num1 - num2;

    printf("Multiplicação: %i\n Divisão: %.2f\n Soma: %i\n Subtração: %i\n", mult, div, soma, sub);

    return 0;
}