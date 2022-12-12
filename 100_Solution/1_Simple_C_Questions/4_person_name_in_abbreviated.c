/*To convert the person's name into the abbreviated
example: user enter AJEET SINGH TOMAR
         then the output is A.S.TOMAR.
         (Harsh Singh Tomar - H.S.Tomar)*/

#include<stdio.h>
void main()
{
    char first_name[10],middel_name[10],last_name[10];
    printf("\nEnter the first name:");
    scanf("%s",first_name);
    printf("\nEnter the middel name:");
    scanf("%s",middel_name);
    printf("\nEnter the last name:");
    scanf("%s",last_name);
    /*Person's name convert into the abbreviated*/
    printf("%c.",first_name[0]);
    printf("%c.",middel_name[0]);
    printf("%s",last_name);

}