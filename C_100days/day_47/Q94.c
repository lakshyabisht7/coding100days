/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/
#include <stdio.h>
int main() 
{
    char str[200];
    int i = 0, start = 0, maxLen = 0, maxStart = 0, len;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (str[i] != '\0') 
    {
        if (str[i] == ' ' || str[i] == '\n') 
        {
            len = i - start;
            if (len > maxLen) 
            {
                maxLen = len;
                maxStart = start;
            }
            start = i + 1;
        }
        i++;
    }

    // check last word
    len = i - start;
    if(len > maxLen) 
    {
        maxLen = len;
        maxStart = start;
    }

    printf("Longest word: ");
    for(i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);
    printf("\n");

    return 0;
}
