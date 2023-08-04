// (condicional) ? // condição verdaderia : // condição falsa ; 

#include <stdio.h>

int main(void) {

    int time = 11;

    (time >= 12) ? printf("Já é tarde\n %i horas\n!", time) : printf("Já é dia!\n %i horas!\n", time);

    return 0;
}