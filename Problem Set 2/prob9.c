#include <stdio.h>

int main()
{
    int n = 0;
    int a;

    printf("Enter the sum of the first 'n' natural numbers: ");
    scanf("%d", &a);

    int b = a;

    for( int i = 1; b > 0; i++ )
    {
        b = b - i;
        n = n+1;
    }

    printf("The sum of the first %d natural numbers is %d\n", n, a);
    
    return 0;
}