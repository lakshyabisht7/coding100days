/* Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    int n=num, sum=0;
    while(n != 0)
    {
        int d = n%10;
        int f=1;
        //Factorial calculation
        for(int i=1; i<=d; i++)
        {
            f = f * i;
        }

        sum = sum + f;
        n = n/10;
    }

    if(num == sum)
    printf("%d is strong number",num);
    else
    printf("%d is not a strong number",num);
    
    return 0;
}