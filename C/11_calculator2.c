
#include<stdio.h>
# include <ctype.h>

/*double user_input(double x, double y) //these things inside the brackets are called parameters
{
    printf("Enter the first number: ");
    scanf("%lf", &x);
    printf("Enter the second number: ");
    scanf("%lf", &y); 
   return x;
   return y; 
}

this doesn't work becuz, one function cannot return two variables, as per my basic knowledge
*/

int main(){
    char operator;
    double num1;
    double num2;
    double result;
    

    printf("Enter a operator: + or - or * or /");
    scanf(" %c", &operator);
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case'+' :
           //user_input(num1,num2); //here the things inside the brackets are called arguments
            result = num1 + num2;
            printf("The result is : %.1lf", result);
            break;
        case'-':
           // user_input(num1, num2);
            result = num1 - num2;
            printf("The result is : %.1lf", result);
            break;
        case'*':
            //user_input(num1, num2);
            result = num1 * num2;
            printf("The result is : %.1lf", result);
            break;
        case'/':
            //user_input(num1, num2);
            result = num1 / num2;
            printf("The result is : %.1lf", result);
            break;
        default:
         printf("Enter a valid operator");
         break;

    }

return 0;
}
