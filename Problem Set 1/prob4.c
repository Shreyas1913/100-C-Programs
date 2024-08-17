//Program to convert Farenheit to Celsius.

#include <stdio.h>

int main()
{
    int c;
    int f;

    printf("Enter temperature in Farenheit: ");
    scanf("%d", &f);

    c = (f-32)/1.8;

    printf("Temperature in Celsius: %d\n", c);
}