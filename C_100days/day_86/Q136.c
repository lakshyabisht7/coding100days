/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/
#include <stdio.h>
#include <string.h>

enum Choice {ADD, SUBTRACT, MULTIPLY};

int main() 
{
    char c[10];
    int a, b;
    enum Choice ch;

    printf("Enter your choice (ADD/SUBTRACT/MULTIPLY): ");
    scanf("%s", c);
    printf("Enter two numbers for your chosen operation: ");
    scanf("%d %d", &a, &b);

    if (strcmp(c,"ADD") == 0)
    ch=ADD;
    else if (strcmp(c,"SUBTRACT") == 0)
    ch=SUBTRACT;
    else
    ch=MULTIPLY;

    switch (ch) 
    {
        case ADD:
            printf("%d\n", a+b);
            break;
        case SUBTRACT:
            printf("%d\n", a-b);
            break;
        case MULTIPLY:
            printf("%d\n", a*b);
            break;
    }
    return 0;
}