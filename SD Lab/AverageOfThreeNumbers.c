#include <stdio.h>
int main(){

    float x,y,z,avg;
    printf("Enter the three number, avg of which are needed: ");
    scanf("%f %f %f", &x, &y, &z);
    avg = (float)((x+y+z)/3);
    printf("The required avg of the three numbers entered is: %0.3f", avg);
    return 0;
}