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

// Function to convert binary to hexadecimal
void binaryToHexadecimal(char *binary, char *hexadecimal) {
    int decimal = binaryToDecimal(binary);
    decimalToHexadecimal(decimal, hexadecimal);
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(char *hexadecimal) {
    int decimal = 0;
    int length = strlen(hexadecimal);
    for (int i = 0; i < length; i++) {
        if (hexadecimal[length - i - 1] >= '0' && hexadecimal[length - i - 1] <= '9') {
            decimal += (hexadecimal[length - i - 1] - '0') * pow(16, i);
        } else if (hexadecimal[length - i - 1] >= 'A' && hexadecimal[length - i - 1] <= 'F') {
            decimal += (hexadecimal[length - i - 1] - 'A' + 10) * pow(16, i);
        }
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

// Function to convert hexadecimal to binary
void hexadecimalToBinary(char *hexadecimal, char *binary) {
    int decimal = hexadecimalToDecimal(hexadecimal);
    decimalToBinary(decimal, binary);
}

int main() {
    char binary[32], hexadecimal[32];
    int choice;

    printf("Choose an option:\n");
    printf("1. Convert binary to hexadecimal\n");
    printf("2. Convert hexadecimal to binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%s", binary);
        binaryToHexadecimal(binary, hexadecimal);
        printf("Hexadecimal equivalent: %s\n", hexadecimal);
    } else if (choice == 2) {
        printf("Enter a hexadecimal number: ");
        scanf("%s", hexadecimal);
        hexadecimalToBinary(hexadecimal, binary);
        printf("Binary equivalent: %s\n", binary);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
