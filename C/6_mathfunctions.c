#include <stdio.h>
#include <math.h>
int main(){
    float A;
    int B;
    double C;

    printf("enter a float: ");
    scanf("%f", &A);

    B = floor(A);
    C = A - B;

    printf("the fractional part of the given number is: %lf", C);

    return 0;



}