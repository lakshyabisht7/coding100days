/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of terms:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Original Array:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    int start = 0, end = n-1;
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    
        start++;
        end--;
    }

    printf("\nReversed Array:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}