#include<stdio.h>

int main(){
    int sum = 0;
    printf("Enter the value of N: ");
    int temp = 0;
    temp = scanf("%d",&temp);
    int N = ((temp-1)/2);
    printf("%d", N);
    
    for(int i = 0; i <= N; i++){

        int odd = ((2 * i) + 1);
        sum += odd;
         printf("%d", sum);
    }
   
    return 0;



}