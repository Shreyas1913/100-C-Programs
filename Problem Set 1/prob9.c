//Program to find the quotient and remainder when 2 numbers are divided.

#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter the Dividend: ");
    scanf("%d", &a);

    printf("Enter the Divisor: ");
    scanf("%d", &b);

    int q = a/b;
    int r = a%b;

    printf("Quotient: %d\nRemainder: %d\n", q, r);
}