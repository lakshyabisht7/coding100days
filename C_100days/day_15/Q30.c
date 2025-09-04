/*Q30: Write a program to reverse a given number.

Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to reversed :");
    scanf("%d", &num);

    int rev=0 ;
    while(num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("Reversed number :%d",rev);

    return 0;
}