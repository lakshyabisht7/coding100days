/*Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams
*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100];
    int i, j, flag = 0, matched[100] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) 
    {
        printf("Not anagrams\n");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) 
    {
        int found = 0;
        for(j = 0; str2[j] != '\0'; j++) 
        {
            if(str1[i] == str2[j] && matched[j]==0) 
            {
                matched[j] = 1; // mark as used
                found = 1;
                break;
            }
        }
        if(found == 0) 
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        printf("Not anagrams\n");
    else
        printf("Anagrams\n");

    return 0;
}
