#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int x;
    int d;
    int sum;

    printf("Enter the number: ");
    scanf("%d", &n);

    x = n;
    sum = 0;

    while(x > 0)
    {
        d = x%10;
        sum = sum + pow(d,3);
        x = x/10;
    }
    
    if(n==sum)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}