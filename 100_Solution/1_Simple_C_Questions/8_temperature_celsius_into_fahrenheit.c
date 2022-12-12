/*to convert temperature celsius into fehrenheit
(fehrenheit=celcius*1.8000+32)*/
#include<stdio.h>
void main()
{
    float celsius,fehrenheit;
    printf("Enter the celcius:");
    scanf("%f",&celsius);
    fehrenheit=(celsius*1.8000)+32;
    printf("Fehrenheit=%f",fehrenheit);
}