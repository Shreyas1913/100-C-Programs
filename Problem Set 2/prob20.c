#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float f;
    float g;

    printf("Enter the number: ");
    scanf("%d", &n);

    f = sqrt(n);
    g = (int)f;

    if (f==g)
        printf("%d is a perfect square\n", n);
    else
        printf("%d is not a perfect square\n", n);
}