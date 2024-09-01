#include <stdio.h>

int main()
{
    long int n,x;
    int rem,prod;

    printf("Enter the number: ");
    scanf("%ld", &n);

    x=n;
    prod = 1;
    while(x>0)
    {
        rem=x%10;
        prod = prod*rem;
        x = x/10;
    }

    printf("%d\n", prod);
    return 0;
}