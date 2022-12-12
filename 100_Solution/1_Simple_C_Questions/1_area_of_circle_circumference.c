/*Area of Circle
(area of circle = pi*r*r)
(circuimference of a Circle=pi*Diameter)*/
#include<stdio.h>
void main()
{
    float pi=3.1429,radius,area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("The area of circle=%f",area);
}