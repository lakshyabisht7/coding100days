/* Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{
    int n, cp=0, cn=0, cz=0 ;
    printf("Enter number of terms:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > 0)
        cp++;

        else if(arr[i] < 0)
        cn++;

        else 
        cz++;
    }
    printf("Count of positive numbers=%d \n",cp);
    printf("Count of negative numbers=%d \n",cn);
    printf("Count of zeros=%d \n",cz);

    return 0;
}