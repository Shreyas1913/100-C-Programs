#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter Number 1: ");
    scanf("%d", &a);

    printf("Enter Number 2: ");
    scanf("%d", &b);

    printf("Before Swapping: %d,%d\n", a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping: %d,%d\n", a,b);

}