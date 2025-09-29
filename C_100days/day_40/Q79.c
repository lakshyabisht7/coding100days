/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main()
{
    int r, c ;
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

    for(int k=0; k < r+c-1; k++ )
    {
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(i+j == k)
                printf("%d ", mat[i][j]);
            }
        }
    }

    return 0;
}
