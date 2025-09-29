/*Q80: Multiply two matrices.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() 
{
    int r1, c1, r2, c2;
    printf("Enter number of rows and columns in matrix 1:\n");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];
    printf("Enter elements to matrix 1: \n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter number of rows and columns in matrix 2:\n");
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    printf("Enter elements to matrix 2: \n");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2) 
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int result[r2][c1];

    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            for (int k = 0; k < c1; k++) 
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant Matrix: \n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
