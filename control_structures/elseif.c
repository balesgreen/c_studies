#include <stdio.h>

int main() {

    int age;

    printf("Age: ");
    scanf("%i", &age);

    if(age >= 21) {
        printf("\nAge is: %i\n You are adult, and you can drive!\n", age);
    } else if(age >= 16) {
        printf("\nAge is: %i\nYou aren't adult, but you can drive!\n", age);
    } else {
        printf("\nAge is: %i\nSorry. You aren't adult, and you can't drive!\n", age);
    }

    return 0;
}