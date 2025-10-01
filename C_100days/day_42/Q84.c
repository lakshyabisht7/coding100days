/*Q84: Convert a lowercase string to uppercase without using built-in functions.

Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
int main()
{
    char str[100], newstr[100], ch;
    printf("Enter a string(Without spaces):\n");
    scanf("%s", str);

    int i;
    for(i=0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if(ch >= 'a' && ch <='z')
        ch = (ch - 32);

        newstr[i] = ch;
    }

    newstr[i] = '\0';
    printf(newstr);

    return 0;
}