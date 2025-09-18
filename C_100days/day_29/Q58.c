/*Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
int main()
{
    int n, max, min;
    printf("Enter number of elements :");
    scanf("%d",&n);
    int arr[n];

    printf("Enter %d elements to array :\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(i==0)
        {
            max = arr[0];
            min = arr[0];
        }
        else
        {
            if(max < arr[i])
            max = arr[i];

            if(min > arr[i])
            min = arr[i];
        }
    }
    printf("Max=%d, Min=%d", max, min);

    return 0;
}