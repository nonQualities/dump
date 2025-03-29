#include <stdio.h>
#include <math.h>

int main() {
    int number, ogNum, rem, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &number);
    ogNum = number;
    for (ogNum = number; ogNum != 0; ++n) {
        ogNum /= 10;}
    ogNum = number;
    while (ogNum != 0) {
        rem = ogNum % 10;
        result += pow(rem, n);
        ogNum /= 10;}
    if ((int)result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number); }

    return 0;
}
