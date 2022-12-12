/*In this program we see the use of scanf().
1>.scanf() is used for to take input from the user.
2>.scanf() is take input any type of data it may be integer,float,character,string,etc.*/
#include<stdio.h>
void main()
{
    int age;
    float salary;
    char section;
    char email_id[10];
    char f_name[10];
    
    //printf("Enter your full name: ");
    //gets(f_name);/*syntax of gets()*/
    printf("Enter your class section: ");
    section=getchar();/*syntax of getchar()*/
    
    printf("Enter your age: ");
    scanf("%d",&age);/*syntax of scanf()*/
    printf("Enter your salary: ");
    scanf("%f",&salary);/*syntax of scanf()*/
    
    printf("Enter your email id: ");
    scanf("%s",&email_id);/*syntax of scanf()*/
    
    //printf("\nEntered your full name: %s",f_name);
    printf("\nEntered your email id: %s",email_id);
    printf("\nEntered your class section: %c",section);
    printf("\nEntered your salary: %f",salary);
    printf("\nEntered your age: %d",age);
}