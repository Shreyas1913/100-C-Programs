#include <stdio.h>

int main()
{
    int a;
    int b;
    int sum;
    int mul;
    int sub;
    int div;
    int choice;

    printf("Enter 2 numbers(a b): ");
    scanf("%d %d", &a, &b);

    printf("Choose 1 of the few: \n\n1)Addition\n2)Multiplication\n3)Subtraction\n4)Division\n\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            sum=a+b;
            printf("The sum of %d and %d is %d\n", a, b, sum);
            break;
        case 2:
            mul=a*b;
            printf("The product of %d and %d is %d\n", a, b, mul);
            break;
        case 3:
            sub=a-b;
            printf("The difference of %d and %d is %d\n", a, b, sub);
            break;
        case 4:
            div=a/b;
            printf("The quotient of %d and %d is %d\n", a, b, div);
            break;
    }
}