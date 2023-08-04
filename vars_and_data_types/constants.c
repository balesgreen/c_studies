// Quand uma variável é declarada como const, não pode ser manipulada (o seu valor não pode mudar) posteriormente.
// É uma boa prática escreve-la em maiúsculo, para identificar como constante.

#include <stdio.h>

int main() {
    const float PI = 3.14;

    printf("The PI number is: %.2f\n", PI);

    return 0;
}