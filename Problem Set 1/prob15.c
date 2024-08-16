#include <stdio.h>

int main()
{
    char c;

    printf("Enter a upper case alphabet: ");
    scanf("%c", &c);

    printf("lowercase of %c is %c\n", c,c+32);

    return 0;
}