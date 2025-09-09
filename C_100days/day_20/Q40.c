/*Q40: Write a program to find the 1’s complement of a binary number and print it.

Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main()
{
    char bn[100];
    printf("Enter binary number:");
    scanf("%s", &bn);

    for(int i=0 ; bn[i]!=0 ; i++)
    {
        if(bn[i]=='0')
        bn[i] = '1';
        else
        bn[i] = '0';
    }
    printf("%s\n", bn);

    return 0;
}