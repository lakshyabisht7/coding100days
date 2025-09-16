/*Q54: Write a program to print the following pattern:

*

***

*****
*******
*****

***

*

*/
#include <stdio.h>
int main()
{
    for(int i=1; i<=7; i=i+2)
    {
        if( i==1 || i==3 || i==5 )
        printf("\n");

        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=5; i>=1; i=i-2)
    {
        if( i==3 || i==1)
        printf("\n");

        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}