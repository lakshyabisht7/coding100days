/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
int main() 
{
    FILE *fp;
    int num;
    int sum=0,c=0;

    fp=fopen("numbers.txt","r");
    if(fp == NULL) 
    {
        printf("Unable to open numbers.txt\n");
        return 1;
    }

    while(fscanf(fp, "%d", &num) == 1) 
    {
        sum += num;
        c++;
    }
    fclose(fp);

    if (c == 0) 
    {
        printf("File contains no numbers.\n");
        return 0;
    }

    printf("Sum = %d\n",sum);
    printf("Average = %.2f\n", (float)sum/c);
    return 0;
}
