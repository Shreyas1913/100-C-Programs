#include <stdio.h>

int main()
{
    int a,b,i,rem;

    printf("Enter x and y: ");
    scanf("%d %d", &a, &b);

    for( i = a; i >=b; rem++ )
        i-=b;
    
    printf("Remainder: %d\n", i);

    return 0;
}