#include <stdio.h>

int main()
{
    long int n,x;
    int rem,rev;

    printf("Enter the number: ");
    scanf("%ld", &n);

    x=n;
    rev = 0;
    while(x>0)
    {
        rem=x%10;
        rev = rev*10 + rem;
        x = x/10;
    }
    if( rev == n )
        printf("%ld is a palindrome\n", n);
    else
        printf("%ld is not a palindrome\n", n);
    return 0;
}