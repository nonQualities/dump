#include <stdio.h>
int main() {
    printf("1\t2\t3\n");
    printf("4\t5\t6\n");
    printf("7\t8\t9\n");
    
    /* an escape sequence is a character combination od backslash followed by a letter or combination of characters.
    they specify actions within a line or string of text. The some kinds of escape sequence are:
    \n : newline
    \t : tab
    */
   printf("\"I like pizza\"\n"); //to display quotations we use a backslash at the beginning and the end of the string
   
   printf("\\I have it\\"); //to display backslash we use double backslash
   
   return 0;
}