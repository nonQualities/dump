#include<stdio.h>
int main(){
    char grade;
    printf("Please enter your grade: \n");
    scanf("%s", &grade);

    switch (grade)
    {
    case'A':
        printf("You cannot achieve anything more than this");
        break;
    case'B':
        printf("You did good enough");
        break;
    case'C': 
        printf("You need to work harder");
        break;
    case'D':
        printf("You just barely pass, work the hardest");
        break;
    case'E':
        printf("You failed");
        break;
    default:
        printf("Enter a valid grade");
        break;
    }
    return 0;
}