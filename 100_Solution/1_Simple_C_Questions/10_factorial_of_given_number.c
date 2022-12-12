/*To find the factorial of any given which is given by the user.
(n!=n*(n-1)*(n-2)*(n-3)......)*/
#include<stdio.h>
void main()
{
    int any_no,i,factorial=1;
    printf("Enter any no. to find the factorial:");
    scanf("%d",&any_no);
    for ( i = any_no; i >=1; i--)
    {
        factorial=factorial*i;
    }
    printf("The factorial %d = %d",any_no,factorial);
    
}