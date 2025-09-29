/*Q70: Rotate an array to the right by k positions.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n], rotated[n], k;

    printf("Enter elements to array:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);
    if(k>n)
    {
        printf("Enter value of k > n");
        return 1;
    }

    for(int i=0; i<k; i++)
    {
        rotated[i] = arr[n-k+i];
    }

    for(int i=k; i<n; i++)
    {
        rotated[i] = arr[i-k];
    }

    printf("Rotated Array: \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", rotated[i]);
    }
    
    return 0;
}