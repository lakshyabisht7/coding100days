/*Q78: Find the sum of main diagonal elements for a square matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main()
{
    int r, c, sum=0;
    printf("Enter number of rows and columns in matrix:\n");
    scanf("%d %d", &r, &c);
    int mat[r][c];

    printf("Enter elements to matrix: \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &mat[i][j]);

            if(i == j)
            {
            sum += mat[j][j];
            }
        }
    }
    printf("Sum = %d", sum);

    return 0;
}