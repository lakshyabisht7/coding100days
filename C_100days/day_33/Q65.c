/*Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>
int main()
{
    int n, search, f=0 ;
    printf("Enter number of terms:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter an element to be searched:");
    scanf("%d", &search);
    for(int i=0; i<n; i++) //linear searching
    {
        if(arr[i] == search)
        {
            printf("Found %d at index %d",arr[i], i);
            f=1;
            break;
        }
    }
    if (f==0)
    printf("-1");

    return 0;
}