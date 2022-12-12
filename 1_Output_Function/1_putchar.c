/*In this program we see the use of putchar().
1>.putchar() is a output function it is display the output on the console/output screen.
2>.putchar() its is display a single character on the output screen.*/
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character: ");
    ch=getchar();/*syntax of getchar()*/
    putchar(ch);/*syntax of putchar()*/
    /*or we can also putchar() to write a single character on the output screen*/
    putchar('j');/*this is another syntax of putchar().*/
}