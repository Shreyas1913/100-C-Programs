#include <stdio.h>

int main()
{
    long int n,x;
    int rem,sum,dig,true;

    printf("Enter the number: ");
    scanf("%ld", &n);
    printf("Enter the digit: ");
    scanf("%d", &dig);

    x=n;
    sum = 0;
    while(x>0)
    {
        rem=x%10;
        if(rem == dig)
        {
            true = 1;
            printf("%d is part of %ld\n", dig, n);
        }
        x = x/10;
    }

    if(true != 1)
        printf("%d is not part of %ld\n", dig, n);
    return 0;
}