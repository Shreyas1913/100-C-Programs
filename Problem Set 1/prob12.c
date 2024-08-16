#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter side a: ");
    scanf("%d", &a);

    printf("Enter side b: ");
    scanf("%d", &b);

    printf("Enter side c: ");
    scanf("%d", &c);

    if( (a+b) > c && (b+c) > a && (a+c) > b )
        if(a==b && b==c && a==c)
            printf("The lengths form an equilateral triangle\n");
        else if(a!=b && b!=c && a!=c)
            printf("The lengths form a scalene triangle\n");
        else 
            printf("The lengths form an isoceles triangle\n");
    else
        printf("The lengths cannot form a triangle\n");

    return 0;
}