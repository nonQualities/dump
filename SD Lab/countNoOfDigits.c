#include <stdio.h>
    int main(){
        int num, NoOfdigit=0;
        printf("Enter a number: \n");
        scanf("%d", &num);

        for(;num>0; num =num/10){
            NoOfdigit++;
        }
        printf("The number of digits = %d", NoOfdigit);
        return 0;
    }