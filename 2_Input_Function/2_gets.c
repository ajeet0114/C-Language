/*In this program we use the gets().
1>.gets() is used for input a string or you can say multiword or you can say a word/sentence.
2>.gets() is take input only character or string.*/
#include<stdio.h>
void main()
{
    char name[20];
    printf("Enter your name: ");
    gets(name);/*This is the syntax of gets()*/
    printf("Entered name is = %s",name);
}