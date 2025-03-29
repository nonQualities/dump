//to find the area and circumference of a circle of given radius
#include <stdio.h>
int main(){
    const double PI=3.14;
    double radius;
    double circumference;
    double area;

    printf("The radius of the circle is: ");
    scanf("%lf", &radius); //do not forget the &, that is the address operator

    circumference = 2 * PI * radius;
    printf("\nthe circumference of the circle is: %lf", circumference);

    area = PI * radius * radius;
    printf("\nthe area of the circle: %lf", area);
    return 0;

}