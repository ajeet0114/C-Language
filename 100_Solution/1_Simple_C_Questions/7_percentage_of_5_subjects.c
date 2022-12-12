/*To find the percentage of five subject.
percentage=total_marks/no_of_subject*/
#include<stdio.h>
void main()
{
    float subject,percentage,total_marks=0;
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter your %d subject marks =",i+1);
        scanf("%f",&subject);
        total_marks=total_marks+subject;
    }
    percentage=total_marks/5;
    printf("Percentage=%f",percentage);
}