/*Q67: Insert an element in an array at a given position.

Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() 
{
    int n, pos, x;
    printf("Enter Size of array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter elements of array:\n");
    for (int i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index and element resp. to insert\n");
    scanf("%d %d", &pos, &x);

    for (int i=n; i>pos; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    n++;

    printf("Modified Array: ")
    for (int i=0; i<n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}