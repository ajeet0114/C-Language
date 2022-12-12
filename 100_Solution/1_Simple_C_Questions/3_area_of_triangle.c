/*Write a program in C to calculate area of triangle*/
#include<stdio.h>
void main()
{
    float hieght,breadth,area,a;
    printf("Enter the Hieght= ");
    scanf("%f",&hieght);
    printf("Enter the Breadth= ");
    scanf("%f",&breadth);
    area=(hieght*breadth)/2;/*This is the formula of area of triangle*/
    printf("\nThe area_2 of Triangle =%f",area);
}