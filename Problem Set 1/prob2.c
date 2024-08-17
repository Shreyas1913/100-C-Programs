//Program to find out wether a year is a leap year or not.

#include <stdio.h>

int main()
{
    int year;
    
    printf("Enter the year: ");
    scanf("%d", &year);

    if( (year%4 == 0 && year%100 != 0 ) || (year %400 == 0) )
    {
        printf("This year is a leap year \n");
    }
    else
    {
        printf("This year is not a leap year \n");
    }
}