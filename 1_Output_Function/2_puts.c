/*Int This program we see the use of puts()
1>.puts() is use to disply the collections of charater or you can say string on the output screen.*/
#include<stdio.h>
    void main()
    {
        char ch[20];
        printf("Enter your name:");
        gets(ch);/*syntax of gets()*/
        puts(ch);/*syntax of puts()*/
        /*To decalare the another way of puts()*/
        puts("My Name");
    }