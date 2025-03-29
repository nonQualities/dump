#include <stdio.h>
#include <string.h>

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimal, char *hexadecimal) {
    int index = 0;
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[index++] = remainder + '0';
        } else {
            hexadecimal[index++] = remainder - 10 + 'A';
        }
        decimal /= 16;
    }
    hexadecimal[index] = '\0';
    // Reverse the hexadecimal string
    for (int i = 0; i < index / 2; i++) {
        char temp = hexadecimal[i];
        hexadecimal[i] = hexadecimal[index - i - 1];
        hexadecimal[index - i - 1] = temp;
    }
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(char *hexadecimal) {
    int decimal = 0;
    for (int i = 0; hexadecimal[i] != '\0'; i++) {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
            decimal = decimal * 16 + (hexadecimal[i] - '0');
        } else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
            decimal = decimal * 16 + (hexadecimal[i] - 'A' + 10);
        }
    }
    return decimal;
}

int main() {
    char hexadecimal[32];
    int decimal;
    int choice;

    printf("Choose an option:\n");
    printf("1. Convert decimal to hexadecimal\n");
    printf("2. Convert hexadecimal to decimal\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        decimalToHexadecimal(decimal, hexadecimal);
        printf("Hexadecimal equivalent: %s\n", hexadecimal);
    } else if (choice == 2) {
        printf("Enter a hexadecimal number: ");
        scanf("%s", hexadecimal);
        decimal = hexadecimalToDecimal(hexadecimal);
        printf("Decimal equivalent: %d\n", decimal);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
