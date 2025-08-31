/*Q17: Write a program to find the roots of a quadratic equation and categorize them.

Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    
    int D = b*b - 4*a*c ;  //Discriminant = b^2 - 4*a*c

    int r1 = (-b + sqrt(b*b - 4*a*c))/(2*a); //Calculating Root 1
    int r2 = (-b - sqrt(b*b - 4*a*c))/(2*a); //Calculating Root 2

    if(D>0)
    printf("Roots Are real and different: %d, %d",r1,r2);
    

    else if(D==0)
    printf("Roots Are real and same: %d",r1);

    else
    printf("Roots Are complex");

    return 0;
}