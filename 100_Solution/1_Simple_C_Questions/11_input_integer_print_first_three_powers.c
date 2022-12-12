/*To inputer a integer(N) no and print the first three powers(N^1,N^2,N^3)
(N=2----> 2^1=2,2^2=4,2^3=8)*/
#include<stdio.h>
#include<math.h>
void main()
{
    int any_no,i,third_power,second_power,first_power;
    printf("Enter any no:");
    scanf("%d",&any_no);

    printf("Simple without using pow()\n");
    printf("%d\n%d\n%d\n",(any_no),(any_no*any_no),(any_no*any_no*any_no));
    
    printf("With using pow()\n");
    first_power=pow(any_no,1);
    second_power=pow(any_no,2);
    third_power=pow(any_no,3);
    printf("%d\n",first_power);
    printf("%d\n",second_power);
    printf("%d",third_power);
}    