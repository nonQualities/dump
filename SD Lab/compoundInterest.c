#include <stdio.h>
#include <math.h> //I have imported the math file for mathematical functions
//because I will be using the power function below in the formula of interest.
//Although this function has not been taught in class yet.
int main(){
    float principal, r,t;
    float interest;
    printf("Enter the principle balance: ");
    scanf("%f", &principal);
    printf("Enter the rate: ");
    scanf("%f", &r);
    printf("Enter the number of years: ");
    scanf("%f", &t);
    interest = principal*pow((1+(r/100)),t) - principal; //power function used from math header file
    printf("The compound interest is : %f", interest);
    return 0;

}