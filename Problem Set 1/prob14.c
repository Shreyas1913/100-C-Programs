#include <stdio.h>

int main()
{
    char c;

    printf("Enter a lower case alphabet: ");
    scanf("%c", &c);

    printf("Uppercase of %c is %c\n", c,c-32);

    return 0;
}