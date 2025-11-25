/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>
int main() 
{
    FILE *fp_in, *fp_out;
    int ch;

    fp_in=fopen("input.txt","r");
    if(fp_in == NULL) 
    {
        printf("Unable to open input.txt\n");
        return 1;
    }

    fp_out=fopen("output.txt","w");
    if(fp_out == NULL) 
    {
        printf("Unable to create output.txt\n");
        fclose(fp_in);
        return 1;
    }

    while ((ch = fgetc(fp_in)) != EOF) 
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch -= 32;      
        }
        fputc(ch, fp_out);
    }
    fclose(fp_in);
    fclose(fp_out);

    printf("File converted successfully. Check output.txt\n");
    return 0;
}
