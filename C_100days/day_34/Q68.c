/*Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main() 
{
    int n, pos;
    printf("Enter Size of array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter elements to array: ");
    for (int i=0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index of element to delete: ");
    scanf("%d", &pos);

    for (int i=pos; i<(n-1); i++) 
    {
        arr[i] = arr[i+1];
    }

    printf("Modified array : ")
    for (int i=0; i<(n-1); i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

