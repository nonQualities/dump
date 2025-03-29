#include <stdio.h>

// Function to convert decimal to octal
void decimalToOctal(int decimal, char *octal) {
    int index = 0;
    while (decimal > 0) {
        octal[index++] = (decimal % 8) + '0';
        decimal /= 8;
    }
    octal[index] = '\0';
    // Reverse the octal string
    for (int i = 0; i < index / 2; i++) {
        char temp = octal[i];
        octal[i] = octal[index - i - 1];
        octal[index - i - 1] = temp;
    }
}

// Function to convert octal to decimal
int octalToDecimal(char *octal) {
    int decimal = 0;
    for (int i = 0; octal[i] != '\0'; i++) {
        decimal = decimal * 8 + (octal[i] - '0');
    }
    return decimal;
}

int main() {
    char octal[32];
    int decimal;
    int choice;

    printf("Choose an option:\n");
    printf("1. Convert decimal to octal\n");
    printf("2. Convert octal to decimal\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        decimalToOctal(decimal, octal);
        printf("Octal equivalent: %s\n", octal);
    } else if (choice == 2) {
        printf("Enter an octal number: ");
        scanf("%s", octal);
        decimal = octalToDecimal(octal);
        printf("Decimal equivalent: %d\n", decimal);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
