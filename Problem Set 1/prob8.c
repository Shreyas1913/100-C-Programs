#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if(n%10 == 5)
        printf("%d ends with 5\n", n);
    else
        printf("%d doesnt end with 5\n", n);
}