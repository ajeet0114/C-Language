/*To Calculate Simple Interest
(SI=Principal*interest_rate*time)*/
#include<stdio.h>
void main()
{
    float principal,rate,time,Simple_Interest;
    
    printf("Enter the principal: ");
    scanf("%f",&principal);
    printf("Enter the Interest Rate: ");
    scanf("%f",&rate);
    printf("Enter the time(in Year): ");
    scanf("%f",&time);
    Simple_Interest=(principal*rate*time)/100;
    printf("The Simple Interest = %f",Simple_Interest);

}