#include <stdio.h>

int main()
{
    long int n,x;
    int rem,sum;

    printf("Enter the number: ");
    scanf("%ld", &n);

    x=n;
    sum = 0;
    while(x>0)
    {
        rem=x%10;
        sum = sum + 1;
        x = x/10;
    }

    printf("%d\n", sum);
    return 0;
}