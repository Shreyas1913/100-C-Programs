#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if( c>=48 && c<=57 )
        printf("%c is a number\n", c);
    else if( c>=65 && c<=90 )
        printf("%c is an uppercase alphabet\n", c);
    else if( c>=97 && c<=122)
        printf("%c is a lowercase alphabet\n", c);
    else
        printf("%c is a special character\n", c);
    
    return 0;
}