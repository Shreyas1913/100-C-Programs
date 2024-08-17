//Program to swap 2 numbers.

#include <stdio.h>

int main()
{
    int a;
    int b;
    int t;

    printf("Enter Number 1: ");
    scanf("%d", &a);

    printf("Enter Number 2: ");
    scanf("%d", &b);

    printf("Before Swapping: %d,%d\n", a,b);

    t=a;
    a=b;
    b=t;
    
    printf("After Swapping: %d,%d\n", a,b);

}