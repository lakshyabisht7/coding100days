/*Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>
int main() 
{
    FILE *fp;
    char lines[200];

    fp = fopen("info.txt","r");
    if(fp == NULL) 
    {
        printf("Error while opening file.\n");
        return 1;
    }

    while (fgets(lines,sizeof(lines),fp) != NULL) 
    {
        printf("%s",lines);
    }
    
    fclose(fp);
    return 0;
}
