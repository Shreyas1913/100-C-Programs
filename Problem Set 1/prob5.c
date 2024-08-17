//Program to find out the diameter, area, and perimeter of a circle when given the radius.

#include <stdio.h>

int main()
{
    int r;
    int d;
    int s;
    int p;

    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    d = 2*r;
    s = 3.14*(r*r);
    p = 2*3.14*r;

    printf("r = %d, d = %d, s = %d, p = %d.\n", r, d, s, p);

}