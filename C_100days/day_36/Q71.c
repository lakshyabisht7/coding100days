/*Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows and columns in matrix:\n") ;
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

    printf("Display matrix: \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}