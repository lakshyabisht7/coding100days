/* Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/
#include <stdio.h>
int main()
{
    int num, pow=1, swap;
    printf("Enter number:");
    scanf("%d",&num);

    int n = num;
    int last = n%10;
    while(n >= 10)
    {
        n = n/10;
        pow = pow*10;    
    }
    
    int first = n;
    swap = last*pow + (num%pow)/10 * 10 + first;

    printf("After swapping: %d",swap);

    return 0;    
}