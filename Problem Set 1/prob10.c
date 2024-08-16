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
        printf("The lengths can form a triangle\n");
    else
        printf("The lengths cannot form a triangle\n");

}