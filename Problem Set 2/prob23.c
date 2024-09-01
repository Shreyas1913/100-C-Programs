#include <stdio.h>

int main()
{
    long int n,x;
    int rem;

    printf("Enter the number: ");
    scanf("%ld", &n);

    x=n;
    while(x>0)
    {
        rem=x%1000;
        printf("%d ", rem);
        x = x/1000;
    }

    printf("\n");
    return 0;
}