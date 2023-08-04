// Short int -> Essa declaração determina que a variável do tipo int terá a metade do seu valor, ou seja, 16 bits (2 bytes).
// Scanf() -> Essa função pega a informação que foi inserida pelo usuário e armazena ela dentro de alguma variável, nesse caso, idade.
// %hi -> Essa sigla se chama especificador de formatação e ele vai definir qual será o tipo de dado que será impresso (short int).

#include <stdio.h>

int main() {
    short int idade;

    printf("Digite sua idade: ");
    scanf("%hi", &idade);

    printf("Sua idade é %hi anos\n", idade);

    return 0;
}