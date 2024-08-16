#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Enter the coordinates(x y): ");
    scanf("%d %d", &x, &y);

    if( x>0 && y>0 )
        printf("It is in the 1st Quadrant\n");
    else if( x<0 && y<0 )
        printf("It is in the 3rd Quadrant\n");
    else if( x<0 && y>0 )
        printf("It is in the 2nd Quadrant\n");
    else if( x>0 && y<0 )
        printf("It is in the 4th Quadrant\n");
    else
        printf("It is not in any Quadrant\n");
}