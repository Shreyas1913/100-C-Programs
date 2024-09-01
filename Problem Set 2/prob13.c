#include <stdio.h>

int main()
{
    int n;
    int a  = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        a = a + 2*i;

    printf("The sum of the first %d even natural numbers is %d\n", n, a);
    return 0;
}