#include <stdio.h>
#include <math.h>

int main()
{
    int x1,y1,x2,y2,x3,y3;
    float a,b,c;

    printf("Enter the first point(x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter the second point(x2 y2): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter the third point(x3 y3): ");
    scanf("%d %d", &x1, &y1);

    a = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    b = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
    c = sqrt(pow(x3-x1,2) + pow(y3-y1,2));

    if(a+b>c && b+c>a && a+c>b)
        printf("The given points form a triangle\n");
    else
        printf("The given points do not form a triangle\n");
}