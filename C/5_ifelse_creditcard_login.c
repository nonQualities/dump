#include <stdio.h>
int main(){
    int age;
    printf("what is your age?");
    scanf("%d", &age);

    if(age>=18){
        printf("You are eligible for credit card sign up\n");
    }
   else  if (/* condition */ age<18)
    {
        /* code */printf("You are not legally eligible yet, see you again when you are 18");
    }
    else
    {
        /* code */ printf("invalid input");
    }
    

    return 0;

}