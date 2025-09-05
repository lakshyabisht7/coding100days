/*Q31: Write a program to take a number as input and print its equivalent binary representation.

Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/
#include <stdio.h>
int main()
{
    int n, bin[20], i=0;
    printf("Enter a number:");
    scanf("%d", &n);

    if (n==0)
    {
        printf("0");
        return 0;
    }

    while(n!=0)
    {
        bin[i] = n%2;
        n = n/2;
        i++;
    }

    for(int j=0 ; j<i ; j++)
    {
        printf("%d", bin[i-1-j]);
    }

    return 0;
}