/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character to check:");
    scanf("%c",&ch);
    int c=(int)ch;//explicit type casting to ascii code

    if(c>=65 && c<=90)//ascii code for A-Z
    printf("Uppercase Alphabet");

    else if(c>=97 && c<=122) //ascii for a-z
    printf("Lowercase Alphabet");

    else if(c>=48 && c<=57) //ascii for 0-9
    printf("Digit");

    else 
    printf("Special Character");

    return 0;
}