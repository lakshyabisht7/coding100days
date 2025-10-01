/*Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
int main()
{
    char str[100], ch;
    printf("Enter a string(Without spaces):\n");
    scanf("%s", str);
    
    int c=0, v=0;

    for(int i=0; str[i] != '\0'; i++)
    {
        ch = str[i];
        if(ch >= 'A' && ch <='Z')
        ch = ch + 32;

        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            v++;

            else
            c++;
        }
    }
    printf("Vowels = %d, Consonants = %d", v, c);

    return 0;
}