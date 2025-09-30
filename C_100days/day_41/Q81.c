/*Q81: Count characters in a string without using built-in length functions.

Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string(Without spaces):\n");
    scanf("%s", str);
    
    int c=0, i=0;

    while(str[i] != '\0')
    {
        c++;
        i++;
    }
    printf("Count of characters in the string = %d", c);

    return 0;
} 