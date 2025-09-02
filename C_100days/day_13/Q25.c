/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/
#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("enter two nos. and operation to perform(+, -, *, /, %%)\n");
    scanf("%d %d %c",&a, &b, &op);

    switch(op)
    {    
        case '+':
        printf("%d", a+b);
        break;
    
        case '-':
        printf("%d", a-b);
        break;
    
        case '*':
        printf("%d", a*b);
        break;
    
        case '/':
        if(b!=0)
        printf("%f", (float)a/b);
        else 
        printf("Division by 0:invalid") ;
        break;
    
        case '%':
        if(b!=0)
        printf("%d", a%b);
        else 
        printf("Modulus by 0:invalid") ;
        break;
    
        default:
        printf("Invalid Operator");
    }
    return 0;
}
