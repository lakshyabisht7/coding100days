/* Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/
#include<stdio.h>
int main()
{
    int a, b, f=0;
    printf("Enter 2 nos. \n");
    scanf("%d %d", &a, &b);

    int max = (a>b) ? a:b ;

    while(f==0)
    {
    if((max % a)==0 && (max % b)==0 )
    {
        f=1;
        printf("LCM = %d",max);
        break;
    }
    max++;
    }

    return 0;
}