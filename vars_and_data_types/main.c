// No tipo char é utilizado '' para caracteres isolados e "" para strings.
/* Use junto ao especificador de format floar %.2f para indicar duas casas decimais ou altere
o número para indicar a quantidade de casas decimais. */
// Tipos de dados primitivos são os tipos de dados simples (int, float, boolean, char).
// Cada tipo de dados possui seus tipos e especificadores próprios.

#include <stdio.h>

int main() {

    // Variáveis, tipos, valor atribuido.

    int numero_inteiro = 20;
    float numero_real = 3.14;
    char caractere = 'c';

    //printf() com especificadores de formato.
    printf("numero inteiro: %i\n", numero_inteiro);
    printf("numero real: %f\n", numero_real);
    printf("Caracter: %c\n", caractere);
    
    return 0;
}