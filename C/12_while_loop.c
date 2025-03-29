#include<stdio.h>
#include<string.h>

int main(){
    char name[25];

    printf("What is your name? ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] == '\0'; //as we know the fgets fxn adds a new line sequence by default
    //this is to remove that newline character, from the execution.

    while (strlen(name) == 1) //if confused what is strlen, check notes on string fxn
    {
        printf("You have not entered a name, please enter a name to continue");
        printf("What is your name?");
        fgets(name, 25, stdin);
        name[strlen(name) - 1]== '\0';
    }

    printf("Hello,%s", name);
    return 0;
    

}
