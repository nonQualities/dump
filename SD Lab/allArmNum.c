#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int ogNum = 0;
    int rem =0;
    int n = 0; //n is the number of n is the number of digits in the int
    float result = 0.0;
    ogNum = num;
    //here we get the value of n which is the number of digits
    for (ogNum = num; ogNum != 0; ++n) {
        ogNum /= 10;}
    ogNum = num;
    // this is for the calculation of the armstrong number which is  every number in the
    //int raised to the power of its numbers of digits and summed
    while (ogNum != 0) {
        rem = ogNum % 10;
        result += pow(rem, n);
        ogNum /= 10;}

    return (int)result == num;//returns a truth value
    }

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 and %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);}}
    printf("\n");
    return 0;
}
