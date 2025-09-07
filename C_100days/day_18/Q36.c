/*Q36: Write a program to find the HCF (GCD) of two numbers.

Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/
#include <stdio.h>
int main()
{
    int a, b;
printf("Enter two numbers: ");
scanf("%d %d", &a, &b);

while(a!=b)
{
    if(a>b)
    a = a-b;
    else
    b = b-a;
}
printf("HCF = %d",a);
return 0;

}
