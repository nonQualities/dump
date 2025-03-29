#include <stdio.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter a operator: + or - or * or /");
    scanf("%c", &operator);

    switch(operator){
        case'+' :
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1+num2;
            printf("The result is : %.2f", result);
            break;
        case'-':
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1-num2;
            printf("The result is : %.2f", result);
            break;
        case'*':
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1*num2;
            printf("The result is : %.2f", result);
            break;
        case'/':
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);
            result = num1/num2;
            printf("The result is : %.2f", result);
            break;
        default:
         printf("Enter a valid operator");
         break;

    }

return 0;
}



