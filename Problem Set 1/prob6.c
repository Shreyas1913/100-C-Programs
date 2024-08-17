//Program to find the Diagonal, Area, and Perimeter of a Square when given the side.

#include <stdio.h>
#include <math.h>

int main()
{
    float side;
    float diagonal;
    float area;
    float perimeter;

    printf("Enter the side: ");
    scanf("%f", &side);

    diagonal = sqrt(2)*side;
    area = pow(side, 2);
    perimeter = 4*side;

    printf("Diagonal: %.2f\n", diagonal);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}