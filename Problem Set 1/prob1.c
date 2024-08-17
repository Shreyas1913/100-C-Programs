//Program to find out wether a number is 2 digit or not.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n/10!=0 && n/100==0)
    {
        printf("%d is a 2 digit number\n", n);
    }
    else
    {
        printf("%d is not a 2 digit number\n", n);
    }
    return 0;
}