#include <stdio.h>
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;}
    return a;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int gcd = findHCF(num1, num2);
    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, gcd);
    return 0;

}
