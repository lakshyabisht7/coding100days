/*Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

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
    printf(newstr);

    return 0;
}