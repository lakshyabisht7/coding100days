/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
int main()
{
    char str[200];
    int i, start = 0, end, temp;
    char ch;

    printf("Enter a sentence:\n");
    gets(str); 

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            end = i - 1;

            while (start < end)
            {
                ch = str[start];
                str[start] = str[end];
                str[end] = ch;
                start++;
                end--;
            }
            start = i+1;
        }
    }

    end = i-1;
    while (start < end)
    {
        ch = str[start];
        str[start] = str[end];
        str[end] = ch;
        start++;
        end--;
    }
    printf("Output:\n%s\n", str);

    return 0;
}
