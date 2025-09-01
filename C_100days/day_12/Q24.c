/*
Q24: Write a program to calculate an electricity bill based on units consumed.

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200
*/
#include <stdio.h>
int main()
{
    int u,bill;
    printf("Enter units consumed:");
    scanf("%d",&u);

    if(u<=50)
    {
    bill = u * 50;
    printf("Bill : %d",bill);
    }
    else if(u<=200)
    {
    bill = 50 * 5 + (u-50) * 7;
    printf("Bill : %d",bill);
    }
    else if(u>200)
    {
    bill = 5 * 50 + (u-100) * 7 + (u-200) * 18;
    printf("Bill : %d",bill);
    }
    
    return 0;
}