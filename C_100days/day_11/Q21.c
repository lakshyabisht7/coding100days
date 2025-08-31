/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.

Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days
*/
#include <stdio.h>
int main()
{
    int m;
    printf("Enter number from 1-12 to check no. of days of the month of a year\n");
    scanf("%d",&m);

    switch(m)
    {
        case 1:
        printf("January, 31 days");
        break;
        
        case 2:
        printf("February, 28 days");
        break;
        
        case 3:
        printf("March, 31 days");
        break;
        
        case 4:
        printf("April, 30 days");
        break;
        
        case 5:
        printf("May, 31 days");
        break;
        
        case 6:
        printf("June, 31 days");
        break;
        
        case 7:
        printf("July, 30 days");
        break;

        case 8:
        printf("August, 31 days");
        break;

        case 9:
        printf("September, 30 days");
        break;

        case 10:
        printf("October, 31 days");
        break;

        case 11:
        printf("November, 30 days");
        break;

        case 12:
        printf("December, 31 days");
        break;

        
        default:
        printf("Invalid input");
    }
    
    return 0;
}