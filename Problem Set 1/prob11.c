#include <stdio.h>
#include <math.h>

int main()
{
    int perimeter;
    int area;
    int s;
    int a;
    int b;
    int c;

    printf("Enter any 3 numbers: ");
    scanf("%d %d %d", &a, &b , &c);

    s = (a+b+c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    perimeter = a+b+c;

    printf("Perimeter: %d\nArea: %d\n", perimeter, area);

    return 0;
}