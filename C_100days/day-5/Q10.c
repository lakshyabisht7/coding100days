/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2: 
2:2:2
*/
#include <stdio.h>
int main()
{
    int s ;
    printf("Enter time in seconds: \n");
    scanf("%d",&s);

    int rem_mins = s%3600;
    int hrs = s/3600;
    int rem_sec = rem_mins % 60;
    int mins = rem_mins/60;
    printf("%d:%d:%d",hrs,mins,rem_sec);

    return 0;
}