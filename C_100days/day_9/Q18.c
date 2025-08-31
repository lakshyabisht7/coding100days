/*Q18: Write a program to assign grades based on a percentage input.

Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F
*/
#include <stdio.h>
int main()
{
    int p;
    printf("Enter your Percentage\n");
    scanf("%d",&p);
    
    if(p>90)
    printf("Grade A");
    
    else if(p>80)
    printf("Grade B");

    else if(p>70)
    printf("Grade C");

    else if(p>60)
    printf("Grade D");

    else if(p>50)
    printf("Grade E");

    else
    printf("Grade F");

    return 0;
}