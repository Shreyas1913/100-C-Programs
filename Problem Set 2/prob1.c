#include <stdio.h>

int main()
{
    int x,y,i,power;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    power = 1;
    for( i = 1; i <=y; i++)
        power = power*x;

    printf("%d to the power of %d is %d\n", x, y, power);
}