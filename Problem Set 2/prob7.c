#include <stdio.h>

int main()
{
    float n;
    int a;

    printf("Enter any number with decimals: ");
    scanf("%f", &n);

    for(int i = 0; i < n; i++)
        a = i;

    printf("The integer form of %.2f is %d\n", n, a);

    return 0;
}