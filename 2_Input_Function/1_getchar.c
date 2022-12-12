/*=>In This Program we see how to use the getchar().
  1>.getch() is use for to take input from the user.
  2>.getch() is take only single bit input or you can say take input only is single character at a time.
  3>.getch() is take input only character.*/
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a Character: ");
    ch=getchar();/*this is syntax of getchar()*/
    printf("Entered Character is = %c",ch);
}