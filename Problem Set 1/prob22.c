#include <stdio.h>
#include <math.h>

int main()
{
    int t1;
    int t2;
    int n;
    int r;
    int sum;

    printf("Enter the first term: ");
    scanf("%d", &t1);

    printf("Enter the second term: ");
    scanf("%d", &t2);

    printf("Enter the total number of terms: ");
    scanf("%d", &n);

    r = t2/t1;
    sum = (t1*(pow(r,n)-1))/(r-1);

    printf("The sum of the first %d terms is %d\n", n, sum);
}