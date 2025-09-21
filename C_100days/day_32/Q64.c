/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    long num;
    int freq[10] = {0};  
    int digit, i, maxFreq=0, result=0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while(num > 0)
    {
        digit = num%10;  
        freq[digit]++;      
        num = num/10;          
    }

    for(i = 0; i<10; i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            result = i;
        }
    }
    
    printf("Digit that occurs the most: %d\n", result);

    return 0;
}