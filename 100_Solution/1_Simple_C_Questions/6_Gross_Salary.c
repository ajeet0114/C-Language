/*To find gross salary of an employee
we need HRA(House Rent Allowance),DA(Dearness Allowance)
Basic_Salary<=10000 : HRA=20%,DA=80%
Basic_Salary>=10000 && Basic_Salary<=20000 : HRA=25%,DA=90%
Basic_Salary>=20001 : HRA=30%,DA=95% 
(gross_salary=basic_salary+hra+da)*/

#include<stdio.h>
void main()
{
    float basic_salary,gross_salary,da,hra;
    printf("Enter your basic salary:");
    scanf("%f",&basic_salary);
    if(basic_salary<=10000)
    {
        da = basic_salary*0.8;
        hra=basic_salary*0.2;
    }
    else if(basic_salary<=20000)
    {
        da=basic_salary*0.9;
        hra=basic_salary*0.25;
    }
    else
    {
        da=basic_salary*0.95;
        hra=basic_salary*0.3;
    }
    gross_salary=basic_salary+hra+da;
    printf("Gross Salary Of Employee=%.2f",gross_salary);
}