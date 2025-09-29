/*Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>
int main()
{
    int r, c, sum;
    printf("Enter number of rows and columns in matrix:\n");
    scanf("%d %d", &r, &c);
    int mat[r][c];

    printf("Enter elements to matrix: \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i=0; i<r; i++)
    {
        sum=0;
        for(int j=0; j<c; j++)
        {
            sum += mat[i][j];
        }
        printf("Sum of elements of row %d = %d \n", i+1, sum);
    }

    return 0;
}