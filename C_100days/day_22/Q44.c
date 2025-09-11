/* Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
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
    int n;
    double sum=0.0;
    printf("Enter number of terms:\n");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
    {
        int num = (i*2-1);
        int deno;
        if(i==1)
        deno = 1;
        else
        deno = i*2;
        sum = sum + (double)num/deno;
    }
    printf("Sum = %f",sum);

    return 0;
}
