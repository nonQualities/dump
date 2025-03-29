#include <stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int result =1;
    for (int i = 0; i <=(n-1); i++)
    {
      result *= (n-i);
    }

    printf("%d", result);

    return 0;

}