#include <stdio.h>

int main() {
    int number;
    long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;}
        printf("The factorial of %d is: %d\n", number, factorial);
    }

    return 0;
}
