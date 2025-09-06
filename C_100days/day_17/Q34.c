/*Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number to check:");
    scanf("%d", &n);

    int f=0;
    for(int i=1 ; i<=n ; i++)
    {
        if(n%i == 0)
        f++;
    }

    if(f==2)
    printf("Prime no.");

    else 
    printf("Non-Prime no.");

    return 0;
}