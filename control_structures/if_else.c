/*
Operadores relacionais:

maior: >
menor: <
maior igual: >=
menor igual: <=
igual: ==
diferente: !=

Operadores lógicos relacionais:

&&: "e" lógico
||: "ou" lógico
!: se falso "is true"
*/


#include <stdio.h>

int main() {

    int age;
    printf("AGE: ");
    scanf("%i", &age);

    if(age >= 21) { // Verifica se a idade inserida é maior ou igual a 21
        printf("\nAge is: %i\n You Can Drive!\n", age);
    } else { // Caso a idade for menor ou não for igual a 21, então será executado o código dentro de else {}
        printf("\nAge is: %i\nSorry, You Can't Drive!\n", age);
    }

    return 0;
}