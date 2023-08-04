// Especificador de formato %C e %S é usado para caracteres e strings.
// Especificador de formato %F é usado para números reais ou tipo floats.
// Especificadores de formato %I e %D são usado para números inteiro (%i = inteiro) e (%d =  usado para inteiros e hexadecimais)
// Especificador de formato %lf é usado para números do tipo double.

/*
Existem outros especificadores de formatos:

%li = long int
%lld = long long

Ao utilizar um tipo de variável, verifique o especificador adequado.
*/


#include <stdio.h>

int main() {
    
    // Variáveis, tipos, valor atribuido.
    int numero_inteiro = 20;
    float numero_real = 3.14;
    double numero_double_real = 90.0000;
    char caractere = 'c'; // Aspas simples = único char | aspas duplas = strings.

    // printf() com especificadores de formato.
    printf("Número inteiro: %i\n", numero_inteiro);
    printf("Número real: %f\n", numero_real);
    printf("Número Double Float: %lf\n", numero_double_real);
    printf("Caractere: %c\n", caractere);

    return 0;
}