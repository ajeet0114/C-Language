/*To display the size of diffrent data type.
sizeof(datatype_name) is used to show the size of any data type.*/
#include<stdio.h>
void main()
{
    int a;
    float b;
    char c;
    double d;
    long e;
    long long f;
    long double g;
    printf("Size of int=%d bytes.",sizeof(int));
    printf("\nSize of float=%d bytes.",sizeof(float));
    printf("\nSize of char=%d bytes.",sizeof(char));
    printf("\nSize of double=%d bytes.",sizeof(double));
    printf("\nSize of long=%d bytes.",sizeof(long));
    printf("\nSize of long long=%d bytes.",sizeof(long long));
    printf("\nSize of long double=%d bytes.",sizeof(long double));
}