#include <stdio.h>
#include <math.h>
#include <string.h>
// Function to convert binary to decimal
int binaryToDecimal(char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[length - i - 1] == '1') {
            decimal += pow(2, i);}}
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
        binary[index - i - 1] = temp;}
}

int main() {
    char binary[32];
    int decimal;
    int choice;

    printf("Choose an option:\n");
    printf("1. Convert binary to decimal\n");
    printf("2. Convert decimal to binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%s", binary);
        decimal = binaryToDecimal(binary);
        printf("Decimal equivalent: %d\n", decimal);
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        decimalToBinary(decimal, binary);
        printf("Binary equivalent: %s\n", binary);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
