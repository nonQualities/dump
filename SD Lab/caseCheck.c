#include <stdio.h>
#include <ctype.h>
    int main(){
        char type;
        
        printf("Welcome to case checker, Please enter a character: ");
        scanf("%c", &type);

        if(type >= 'A' && type<= 'Z'){
            printf("The entered character is UPPERCASE");
        }else if (type>= 'a' && type<= 'z'){  
            printf("The entered character is lowercase");
        }else printf("The entered character is case indifferent");
        
        return 0;
    }