/*
Operadores aritiméticos, lógicos, atribuição,  comparação.

Operadores aritiméticos:

-----------------------------------------------------------------------
Operador    Nome            Descrição                           Exemplo
+          Adição          Soma dois valores                     x + y
-         Subtração        Substrai um valor de outro            x - y
*         Multiplicação    Multiplica dois valores               x * y
/         Divisão          Divide um valor por outro             x / y
%         Módulo           Retorna o resto divisão               x % y
++        Incremento       Aumenta o valor de uma variável em 1    ++x
--        Decremento       Diminui o valor de uma variável em 1    --x


Operadores de atribuição:

--------------------------------
Operador    Exemplo     Igual a
=           x = 5       x = 5
+=          x += 5      x = x + 5
-=          x -= 5      x = x - 5
*=          x *= 5      x = x * 5
/=          x /= 5      x = x / 5
%=          x %= 5      x = x % 5
&=          x &= 5      x = x & 5
|=          x |= 5      x = x | 5
^=          x ^= 5      x = x ^ 5
<<=         x <<= 5     x = x << 5
>>=         x >>= 5     x = x >> 5

Operadores de comparação:

--------------------------------
Operador    Nome         Exemplo
==          igual        x == y
!=          diferente    x!= y
<           menor        x < y
>           maior        x > y
<=          menor ou igual    x <= y
>=          maior ou igual    x >= y

Operadores lógicos:

------------------------------------------------------------------------------------------------------------
Operador    Nome            Descrição                                                       Exemplo
&&          lógico e        Retorna verdadeiro se ambas as declarações forem verdadeiras    x < 5 && x < 10
||          lógico ou       Retorna verdadeiro se uma das declarações forem verdadeiras     x < 5 || x < 10
!          lógico não      Retorna verdadeiro se a declaração for verdadeira                x < 5 || x < 10

Extra: sizeof() - vê o tamanho da variável (em bytes);
especificador: long unsigned int (%lu)

Extra: #include <math.h> - biblioteca de matemática
OBS: Ao compilar, lembre-se de utilizar a flag -lm para buscar pela biblioteca no sistema (Linux).
bash script: gcc/cc file_name.c -o file_name -lm

*/

#include <stdio.h>

int main() {
    
    const float PI = 3.14;
    const int age = 21;
    const long mil = 1000;
    const char caractere = 'c';
    const unsigned char caractere2 = 'c';
    const signed char caractere3 = 'c';
    const unsigned int numero = 10;
    const signed int numero2 = 10;
    const long numero3 = 10L; // Usando "L" para indicar que é um long literal
    const unsigned long numero4 = 10UL; // Usando "UL" para indicar que é um unsigned long literal
    const signed long numero5 = 10L;
    const long long numero6 = 10LL; // Usando "LL" para indicar que é um long long literal
    const unsigned long long numero7 = 10ULL; // Usando "ULL" para indicar que é um unsigned long long literal
    const signed long long numero8 = 10LL;
    const short numero9 = 10;
    const unsigned short numero10 = 10;
    const signed short numero11 = 10;

    printf("PI: %.2f\n", PI);
    printf("SIZE OF PI VARIABLE: %lu bytes\n", sizeof(PI));
    printf("\nAGE: %i\n", age);
    printf("SIZE OF AGE: %lu bytes\n", sizeof(age));
    printf("\nMIL: %li\n", mil);
    printf("SIZE OF MIL: %lu bytes\n", sizeof(mil));
    printf("\nCARACTER: %c\n", caractere);
    printf("SIZE OF CARACTER: %lu bytes\n", sizeof(caractere));
    printf("\nCARACTER2: %u\n", caractere2);
    printf("SIZE OF CARACTER2: %lu bytes\n", sizeof(caractere2));
    printf("\nCARACTER3: %d\n", caractere3);
    printf("SIZE OF CARACTER3: %lu bytes\n", sizeof(caractere3));
    printf("\nNUMERO: %u\n", numero);
    printf("SIZE OF NUMERO: %lu bytes\n", sizeof(numero));
    printf("\nNUMERO2: %d\n", numero2);
    printf("SIZE OF NUMERO2: %lu bytes\n", sizeof(numero2));
    printf("\nNUMERO3: %ld\n", numero3);
    printf("SIZE OF NUMERO3: %lu bytes\n", sizeof(numero3));
    printf("\nNUMERO4: %lu\n", numero4);
    printf("SIZE OF NUMERO4: %lu bytes\n", sizeof(numero4));
    printf("\nNUMERO5: %lld\n", numero5);
    printf("SIZE OF NUMERO5: %lu bytes\n", sizeof(numero5));
    printf("\nNUMERO6: %llu\n", numero6);
    printf("SIZE OF NUMERO6: %lu bytes\n", sizeof(numero6));
    printf("\nNUMERO7: %llu\n", numero7);
    printf("SIZE OF NUMERO7: %lu bytes\n", sizeof(numero7));
    printf("\nNUMERO8: %llu\n", numero8);
    printf("SIZE OF NUMERO8: %lu bytes\n", sizeof(numero8));
    printf("\nNUMERO9: %hd\n", numero9);
    printf("SIZE OF NUMERO9: %lu bytes\n", sizeof(numero9));
    printf("\nNUMERO10: %hu\n", numero10);
    printf("SIZE OF NUMERO10: %lu bytes\n", sizeof(numero10));
    printf("\nNUMERO11: %hd\n", numero11);
    printf("SIZE OF NUMERO11: %lu bytes\n", sizeof(numero11));
    

    return 0;
}