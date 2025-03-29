#include <stdio.h>


int main(){
    double sum = 0.0;
    int n;
    printf("Enter a value of n: ");
    scanf("%d", &n);

    for(int i = 1;i<=n; i++){
     sum += 1.0/ i ;
    }
    printf("%.6lf", sum);

    return 0;

}

