#include<stdio.h>

int sumNaturalNum(int n){
    if (n == 0) return 0;
    return n + sumNaturalNum(n - 1);
}

int main(){
    int n;
    printf("Enter a number to find the sum of natural numbers upto that number: ");
    scanf("%d", &n);
    printf("The sum of natural numbers upto %d is %d\n", n, sumNaturalNum(n));
    return 0;
}
