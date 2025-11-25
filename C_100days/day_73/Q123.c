/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>
int main() 
{
    FILE *fp;
    char ch;
    int c=0,w=0,l=0,inWord=0;

    fp=fopen("sample.txt","r");
    if(fp == NULL) 
    {
        printf("Error while opening file.\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) 
    {
        c++;

        if(ch == '\n')
        l++;

        if(ch != ' ' && ch != '\n' && ch != '\t') 
        {
            if(inWord == 0) 
            {
                w++;
                inWord=1;
            }
        } 

        else 
        {
            inWord=0;
        }
    }
    fclose(fp);

    if(c > 0 && l == 0)
    l=1;

    printf("Characters: %d\n",c);
    printf("Words: %d\n",w);
    printf("Lines: %d\n",l);

    return 0;
}
