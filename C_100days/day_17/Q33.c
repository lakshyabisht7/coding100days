/*Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:

153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. to check:");
    scanf("%d", &n);
    int sum_of_digit=0, copy=n;
    

    while(n!=0)
    {
        int d = n%10;
        sum_of_digit += d*d*d ;
        n = n /10;
    }

    if(sum_of_digit == copy)
    printf("Armstrong Number");

    else
    printf("Not Armstrong");

    return 0;
}