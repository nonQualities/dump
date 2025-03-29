#include<stdio.h>
int main()
{
    //multiplication nd div   
    int a,b,multiply,div;
    printf("Enter the 1st number:\nEnter the 2nd number");
    scanf("%d%d",&a,&b);
    multiply=a*b;
    div=a/b;
    printf("Multiplication of the two number is %d",multiply);
    printf("\nDivision of the two number is %d",div);


// Area of circle
float r,area;
const float PI =3.14;
printf("\nEnter the value of radius:\n");
scanf("%f",&r);
area=r*PI;
printf("Area of the circle is %f",area);

// simple interest
float p,q,t,SI;
printf("Enter the value of principle, rate, time:\n");
scanf("%f%f%f",&p,&q,&t);
SI=p*q*t/100;
printf("The value of SI is %f",SI);
    return 0;
}