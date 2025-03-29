#include<stdio.h>
#include<ctype.h>

int main(){
    char unit;
    float temp;

    printf("The input temperature is in: F or C\n");
    scanf("%s", &unit);
    unit = toupper(unit);

    if (unit=='C')
    {
        printf("\nEnter the temperature in celcius:");
        scanf("%f", &temp);
        temp = (temp*9/5)+32;
        printf("\nThe temperature in Fareinheit is:%.1f F", temp);
    }


    else if (unit =='F')
    {
        printf("\nEnter the temperature in fereinheit: ");
        scanf("%f", &temp);
        temp = ((temp-32)*5/9);
        printf("\nThe temperature in Celcius is: %.1f C", temp);
    }

    else 
        printf("Enter a valid Unit");

    return 0;

     }

