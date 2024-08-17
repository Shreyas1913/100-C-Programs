#include <stdio.h>

int main()
{
    int t1;
    int t2;
    int tn;
    int n;
    int d;
    int sum;

    printf("Enter the first term: ");
    scanf("%d", &t1);
    
    printf("Enter the second term: ");
    scanf("%d", &t2);

    printf("Enter the total number of terms: ");
    scanf("%d", &n);

    d = t2-t1;
    tn = t1+(n-1)*d;
    sum = n*(t1+tn)/2;

    printf("The sum of the first %d terms is %.d\n", n, sum);

    return 0;
}