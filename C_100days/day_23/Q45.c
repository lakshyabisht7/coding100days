//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
int main()
{
    int n;
    double s=0.0;
    printf("Enter number of terms:\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        s += (double)(i*2)/(i*2*2-1);
    }
    printf("Approximate Sum : %f",s);
    return 0;
}