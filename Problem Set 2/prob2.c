#include <stdio.h>

int main()
{
    int x,y,i,prod;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    prod = 0;
    
    for( i = 1; i <= y; i++)
        prod = prod+x;

    printf("x*y = %d\n", prod);

    return 0;
}