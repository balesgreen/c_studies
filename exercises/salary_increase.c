#include <stdio.h>

int main() {

    int salary, percentage_increase;

    printf("Diga o valor do seu salário: ");
    scanf("%i", &salary);

    printf("Diga a porcentagem de aumento: ");
    scanf("%i", &percentage_increase);

    salary = salary + (salary * percentage_increase / 100);
    printf("O valor do seu salário com o aumento é: %i \n", salary);

    return 0;
}