#include<stdio.h>
#include<string.h>

//Write a program to reverse a number.

int main(){
    char number[4] = "123";

    printf("%s", number);
    strrev(number);
    printf("\n%s", number);

    return 0;

}