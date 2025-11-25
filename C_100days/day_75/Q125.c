/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
int main() 
{
    char fname[100];
    char txt[200];
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s",fname);
    getchar(); 

    printf("Enter text to append:\n");
    fgets(txt,sizeof(txt),stdin);

    fp=fopen(fname,"a");
    if(fp == NULL) 
    {
        printf("Error while opening file.\n");
        return 1;
    }

    fputs(txt, fp);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
