#include <stdio.h>

int main()
{
    int n;
    int a = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = n ; i >= 1; i--)
        a = a + (2*i)-1;

    printf("Sum of the first %d odd natural numbers is %d\n", n, a);

    return 0;
}