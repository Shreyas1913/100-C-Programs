#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int x;
    int d;
    int sum;

    for( n = 100; n <=999; n++ )
    {

        x = n;
        sum = 0;

        while(x > 0)
        {
            d = x%10;
            sum = sum + pow(d,3);
            x = x/10;
        }
    
        if(n==sum)
            printf("%d\n", n);
    }

    return 0;
}