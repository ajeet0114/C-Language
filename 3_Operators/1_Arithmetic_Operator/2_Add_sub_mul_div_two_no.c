/*Write a program in C to input two numbers from the user and calculate the addition,subtraction,multiplication,and division of these two numbers.*/
#include<stdio.h>
void main()
{
    int num_1,num_2,sum,minus,mul,div;/*variable declaretion*/
    printf("Enter First Number:\n");
    scanf("%d",&num_1);
    printf("Enter Second Number:\n");
    scanf("%d",&num_2);
    sum=num_1+num_2;/*Addition using + Arithmetic operator*/
    minus=num_1-num_2;/*Subtraction using + Arithmetic operator*/
    mul=num_1*num_2;/*Multiplication using + Arithmetic operator*/
    div=num_1/num_2;/*Division using + Arithmetic operator*/
    printf("The sum of these two numbers = %d",sum);
    printf("\nThe subtraction of these two numbers = %d",minus);
    printf("\nThe multiplication of these two numbers = %d",mul);
    printf("\nThe divsion of these two numbers = %d",div);
}