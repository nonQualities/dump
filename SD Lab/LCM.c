#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;}
    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int lcm = findLCM(num1, num2);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}
