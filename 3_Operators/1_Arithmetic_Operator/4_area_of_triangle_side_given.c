/*Write a program in C to calculate area of triangle when its all sides is given*/
#include<stdio.h>
#include<math.h>
void main()
{
    float side_1,side_2,side_3,semi_perimeter,area;
    printf("Enter Side 1=");
    scanf("%f",&side_1);
    printf("Enter Side 2=");
    scanf("%f",&side_2);
    printf("Enter Side 3=");
    scanf("%f",&side_3);
    semi_perimeter=(side_1+side_2+side_3)/2;/*this is formula to find the semi perimeter*/
    area=sqrt((semi_perimeter)*(semi_perimeter-side_1)*(semi_perimeter-side_2)*(semi_perimeter-side_3));/*this formula is use to find the area of triangle*/
    printf("The Area of triangle = %f",area);

}