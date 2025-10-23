/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;
    
    for (int i = 0; i < n; i++)
    {
        int length=0;
        int repeat=0;

        for (int j = i; j < n; j++)
        {
            repeat = 0;
            for (int k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }
            if(repeat == 1)
            break;

            length++;
        }
        if(length > maxLen)
        maxLen = length;
    }

    printf("Length of longest substring (without repeating characters): %d", maxLen);
    return 0;
}