/*Q69: Find the second largest element in an array.

Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main()
{  
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements to array : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int largest, s_largest;
    if (arr[1]>arr[0])
    {
        largest = arr[1];
        s_largest = arr[0];
    }    
    else
    {
        largest = arr[0];
        s_largest = arr[1];
    }

    for(int i=2; i<n; i++)
    {
        if(arr[i] > largest)
        {
            s_largest = largest;
            largest = arr[i];
        }
        else if( arr[i] > s_largest && arr[i] < largest )
        {
            s_largest = arr[i];
        }
    }
    printf("Second largest number = %d", s_largest);

    return 0;
}