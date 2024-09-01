#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    int n;
    float f;
    float g;

    printf("Enter the number: ");
    scanf("%d", &i);

    for( n = 1; n <= i; n++)
    {
        f = sqrt(n);
        g = (int)f;

        if (f==g)
            printf("%d\n", n);
    }

}