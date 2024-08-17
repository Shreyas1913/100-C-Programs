#include <stdio.h>

int main()
{
    float a;
    float b;
    float sum;
    float mul;
    float sub;
    float div;
    int choice;

    printf("Enter 2 numbers(a b): ");
    scanf("%f %f", &a, &b);

    printf("Choose 1 of the few: \n\n1)Addition\n2)Multiplication\n3)Subtraction\n4)Division\n\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            sum=a+b;
            printf("The sum of %.2f and %.2f is %.2f\n", a, b, sum);
            break;
        case 2:
            mul=a*b;
            printf("The product of %.2f and %.2f is %.2f\n", a, b, mul);
            break;
        case 3:
            sub=a-b;
            printf("The difference of %.2f and %.2f is %.2f\n", a, b, sub);
            break;
        case 4:
            div=a/b;
            printf("The quotient of %.2f and %.2f is %.2f\n", a, b, div);
            break;
    }
}