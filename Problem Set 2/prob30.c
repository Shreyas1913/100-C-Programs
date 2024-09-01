#include <stdio.h>

int main()
{
    long int i,n,x;
    int rem,rev;

    printf("Enter the number: ");
    scanf("%ld", &n);

    for(i = 1; i <=n; i++)
    {
        x=i;
        rev = 0;
        while(x>0)
        {
            rem=x%10;
            rev = rev*10 + rem;
            x = x/10;
        }
        if( rev == i )
            printf("%d\n", rev);
    }

    return 0;
}