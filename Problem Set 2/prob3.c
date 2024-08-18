#include <stdio.h>

int main()
{
    int x,y,i,q;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    for( i = x; i >= y; q++ )
        i = i - y;
    
    printf("x/y = %d\n", q);
}