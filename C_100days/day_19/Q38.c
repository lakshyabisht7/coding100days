/* Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27
*/
#include <stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter number:");
    scanf("%d",&num);

    while(num!=0)
    {
        int d = num % 10;
        sum += d;
        num = num/10;
    }
    printf("Sum of digits = %d",sum);

    return 0;
}