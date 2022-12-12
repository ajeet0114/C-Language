/*To print the ASCII value of a entered character
example a=97 and A=65*/
#include<stdio.h>
void main(){
    char character;
    printf("Enter a character to print ASCII value of that character:");
    character=getchar();
    printf("%u",character);
}