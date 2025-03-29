#include <stdio.h>

int main() {
    int number, digit;
    int frequency[10] = {0}; 
    printf("Enter a number: ");
    scanf("%d", &number);

    for (int temp = number; temp != 0; temp /= 10) {
        digit = temp % 10; 
        frequency[digit]++;
    }

    printf("Digit Frequency\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] != 0) {
            printf("%d ------- %d\n", i, frequency[i]);
        }
    }
    return 0;
}
