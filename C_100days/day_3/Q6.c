/*Q6: Write a program to swap two numbers using a third variable.

Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1
*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);

    c=a;//storing a in c
    a=b;//storing b in a
    b=c;//storing c in b
    printf("After Swap: %d %d",a,c);

    return 0;
}