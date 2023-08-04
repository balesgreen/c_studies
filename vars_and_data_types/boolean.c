// O output que sairá será 0 ou 1.
// Variáveis do tipo boolean são variáveis de tipo verdadeira ou falsa.

#include <stdio.h>
#include <stdbool.h>

int main() {

    int age;
    bool pass = true;
    bool noPass = false;

    printf("AGE:\n");
    scanf("%i", &age);

    if(age >= 21) {
        printf("Age is: %d\nYou can Drive!\n", pass);
    } else {
        printf("Age is: %d\nYou can't drive!\n", noPass);
    }

    return 0;
}