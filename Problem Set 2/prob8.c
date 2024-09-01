#include <stdio.h>

int main()
{
    float n,f;
    int a;

    printf("Enter any number with decimals: ");
    scanf("%f", &n);

    for(int i = 0; i < n; i++)
        a = i;

    f = n-a;
    printf("The fractional part of %.2f is %.2f\n", n, f);

    return 0;
}