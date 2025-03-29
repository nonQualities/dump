#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

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

// Function to convert binary to octal
void binaryToOctal(char *binary, char *octal) {
    int decimal = binaryToDecimal(binary);
    decimalToOctal(decimal, octal);
}

// Function to convert octal to decimal
int octalToDecimal(char *octal) {
    int decimal = 0;
    int length = strlen(octal);
    for (int i = 0; i < length; i++) {
        decimal += (octal[length - i - 1] - '0') * pow(8, i);
    }
    return decimal;
}

// Function to convert decimal to binary
void decimalToBinary(int decimal, char *binary) {
    int index = 0;
    while (decimal > 0) {
        binary[index++] = (decimal % 2) + '0';
        decimal /= 2;
    }
    binary[index] = '\0';
    // Reverse the binary string
    for (int i = 0; i < index / 2; i++) {
        char temp = binary[i];
        binary[i] = binary[index - i - 1];
        binary[index - i - 1] = temp;
    }
}

// Function to convert octal to binary
void octalToBinary(char *octal, char *binary) {
    int decimal = octalToDecimal(octal);
    decimalToBinary(decimal, binary);
}

int main() {
    char binary[32], octal[32];
    int choice;

    printf("Choose an option:\n");
    printf("1. Convert binary to octal\n");
    printf("2. Convert octal to binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%s", binary);
        binaryToOctal(binary, octal);
        printf("Octal equivalent: %s\n", octal);
    } else if (choice == 2) {
        printf("Enter an octal number: ");
        scanf("%s", octal);
        octalToBinary(octal, binary);
        printf("Binary equivalent: %s\n", binary);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
