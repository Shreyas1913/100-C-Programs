#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int a = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--)
        a = a+pow(i,3);

    printf("The sum of the squares of the first %d natural numbers is %d\n", n, a);

    return 0;
}