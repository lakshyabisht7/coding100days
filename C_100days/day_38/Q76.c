/*Q76: Check if a matrix is symmetric.

Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main()
{
    int r, c, f=1;
    printf("Enter number of rows and columns in matrix:\n");
    scanf("%d %d", &r, &c);
    int mat[r][c];

    if(r != c)
    {
        printf("Symmetric matrix = false");
        return 0;
    }

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
        for(int j=0; j<c; j++)
        {
            if(mat[i][j] != mat[j][i])
            {
                f=0;
                break;
            }
        }
    }

    if(f==1)
    printf("Symmetric matrix = True");
    else
    printf("Symmetric matrix = False");
    
    return 0;
}