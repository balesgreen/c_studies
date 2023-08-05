#include <stdio.h>

int fatorial() {
  int fatorial, i;

  printf("Dê um valor para o fatorial: ");
  scanf("%d", &fatorial);

  if ( fatorial < 0) {
    printf("Não existe fatorial de número negativo!\n");
  } else {
    if( fatorial == 1 || fatorial == 0 ) {
      i = 1;
      printf("Fatorial: 1\n");
    } else {
      for (i = 1; fatorial > 1; fatorial--) {
        i = i * fatorial;
      }

      printf("O valor do fatorial é: %d\n", i);
    }
  }
}
 


unsigned long long int mult_fatorial(int num) {
  unsigned long long int result = 1;
  for (int i = 1; i <= num; i++) {
    result *=i;
  }
  return result;
}

int main() {
  int d;
  printf("[1] - Calcular um fatorial\n");
  printf("[2] - Multiplicar dois fatoriais\n");
  scanf("%d", &d);

  switch(d) {
    case 1:
      fatorial();
      break;

    case 2:
      int num1, num2;
      printf("Digite o primeiro número: ");
      scanf("%d", &num1);
      printf("Digite o segundo número: ");
      scanf("%d", &num2);

      unsigned long long int fatorial_num1 = mult_fatorial(num1);
      unsigned long long int fatorial_num2 = mult_fatorial(num2);

      unsigned long long int result = fatorial_num1 * fatorial_num2;

      printf("%d! * %d! = %llu\n", num1, num2, result);
      break;
  }

  return 0;
}
