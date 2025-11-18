/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
int main() 
{
    char name[100];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    gets(name); 

    // find position of last space (before surname)
    for (i = 0; name[i] != '\0'; i++) 
    {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // print initials before last space
    printf("%c.", name[0]);
    for (i = 0; name[i] != '\0'; i++) 
    {
        if (name[i] == ' ' && i < lastSpace)
            printf("%c.", name[i + 1]);
    }

    // print surname in full (after last space)
    printf(" %s\n", &name[lastSpace + 1]);

    return 0;
}

