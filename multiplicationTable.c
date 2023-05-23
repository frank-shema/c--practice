//this is the first question of a c program to read an integer and give it's
//multiplication table up to 10

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    //reading the number
    scanf("%d", &number);

    printf("Multiplication table for %d is the following:\n", number);
//giving it's multiplication table
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", i , number , i* number);
    }

    return 0;
}

