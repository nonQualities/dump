#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool checkArmstrong(int n){
    int sum = 0, temp = n;
    while (temp != 0){
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    return sum == n;
}

int main(){
    int n;
    printf("Enter a number to be checked: ");
    scanf("%d",n);
    printf("%d",checkArmstrong(n));
    
    return 0;
}
