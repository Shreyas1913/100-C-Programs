#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter 3 sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if((pow(a,2) == pow(b,2)+pow(c,2) ) || (pow(b,2) == pow(a,2)+pow(c,2) ) || (pow(c,2) == pow(a,2)+pow(c,2) ))
        printf("It is a right angled triangle\n");
    else
        printf("It is not a right angled triangle\n");
    
    return 0;
}