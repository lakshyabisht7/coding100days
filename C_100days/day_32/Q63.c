/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main()
{
    int n1, n2, i, j;
    printf("Enter number of elements in array 1: ");
    scanf("%d",&n1);
    int arr1[n1];

    printf("Enter elements in array 1:\n");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Original Array 1:\n");
    for(i=0; i<n1; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nEnter number of elements in array 2: ");
    scanf("%d",&n2);
    int arr2[n2];

    printf("\nEnter elements in array 2:\n");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    printf("Original Array 2:\n");
    for(i=0; i<n2; i++)
    {
        printf("%d ", arr2[i]);
    }

    int arr3[n1+n2];
    for(i=0; i<n1; i++)
    {
        arr3[i]=arr1[i];
    }
    for(j=0; j<n2; j++)
    {
        arr3[i+j]=arr2[j];
    }

    printf("\nMerged Array:\n");
    for(i=0; i<(n1+n2); i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}