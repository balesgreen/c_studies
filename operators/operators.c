/* Type casting é o nome do método usado para mudar o tipo de dado durante uma operação. 
Nesse caso, mudamos para (float). A linguagem C tende a permanecer inteiros em inteiros, 
então deve ser especificados a mudança do tipo de dado usando Type Casting.

Lembrando que: A linguagem C é de tipagem estática, ou seja, deve ser especificado o tipo de
dado da variável. Para converter uma variável já definida (estática) em um outro tipo de dado,
deve se declarar uma nova variável com outro nome, especificando o novo tipo.

*/

#include <stdio.h>

int main() {
    // variáveis
    int num1 = 5;
    int num2 = 2;

    int soma = num1 + num2;
    float divisao = (float)num1 / num2;

    printf("Números das operações: '%i' e '%i'\n", num1, num2);
    printf("Soma: '%i'\n", soma);
    printf("Divisão: %f\n", divisao);
}