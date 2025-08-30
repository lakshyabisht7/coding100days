/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year
*/
#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a year to check for leap year\n");
    scanf("%d",&yr);

    if((yr % 400==0) || ((yr % 4==0) && (yr%100!=0)))
    printf("Leap year");

    else
    printf("Not a leap year");

    return 0;
}
