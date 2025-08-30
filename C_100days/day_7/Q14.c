/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant
*/
#include <stdio.h>
int main()
{
    char c;
    printf("Enter an alphabetical letter to check\n");
    scanf("%c",&c);

    if(c>='A' && c<='Z')
    c = c + 32;
      
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    printf("Vowel");
    else
    printf("Consonant");
    return 0;
}
