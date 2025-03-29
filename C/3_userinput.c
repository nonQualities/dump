#include <stdio.h>
int main(){
    int age;
    char name[30];

    printf("What is your name?");
    fgets(name,30,stdin); //this fuctions has an inbuilt \n function,
    // thus this automatically adds new line
    
    printf("\nHow old are you?");
    scanf("%d",&age);

    printf("\nHello %s,how are you", name);
    printf("\nYou are %d years old.", age);

    return 0;
    //for specifics about the scanf and fgets function refer to physical notes
}