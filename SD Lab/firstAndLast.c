#include <stdio.h>

    int main() {
        int number, firstDigit, lastDigit;

        printf("Enter a number: ");
        scanf("%d", &number);
        lastDigit = number % 10;

        firstDigit = number;
        while (firstDigit >= 10) {
            firstDigit /= 10;
        }

        printf("The first digit is: %d\n", firstDigit);
        printf("The last digit is: %d\n", lastDigit);

        return 0;
}
