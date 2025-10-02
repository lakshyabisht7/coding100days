/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string(Without spaces):\n");
    scanf("%s", str);
    int len = strlen(str);

    char newstr[len];

    for(int i=0; i < len; i++)
    {
        newstr[len-1-i] = str[i];
    }
    
    newstr[len] = '\0';
    
    if (strcmp(newstr, str) == 0)
    printf("Palindrome");
    else
    printf("Not Palindrome");

    return 0;
}