#include <stdio.h>

int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        printf("%d\n", 2*i);

    return 0;
}