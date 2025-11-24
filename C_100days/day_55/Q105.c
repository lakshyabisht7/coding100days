/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int num[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter element:\n");
        scanf("%d",&num[i]);
    }

    int m=-1;   
    int l=n/2;         

    for (int i=0; i<n; i++) 
    {
        int c=0;

        for (int j=0; j<n; j++) 
        {
            if (num[j] == num[i])
            c++;
        }

        if (c > l) 
        {
            m=num[i];
            break;                
        }
    }

    printf("%d\n",m);

    return 0;
}
