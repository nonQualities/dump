#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool checkPrime(int n){
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

void PrintPrime(int a, int b){
    for (int i = a; i <= b; i++){
        if (checkPrime(i)) {
            printf("%d\n", i);
        }
    }
}

int main(){
    int a, b;
    printf("Enter the range in between which the primes to be printed respectively: ");
    scanf("%d %d", &a, &b);
    PrintPrime(a, b);
    return 0;
}