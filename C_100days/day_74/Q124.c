/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
int main() 
{
    char src[100],dest[100];
    FILE *fp1, *fp2;
    int ch;

    printf("Enter source filename: ");
    scanf("%s",src);
    printf("Enter destination filename: ");
    scanf("%s",dest);

    fp1=fopen(src,"r");
    if(fp1 == NULL) 
    {
        printf("Cannot open source file.\n");
        return 1;
    }

    fp2=fopen(dest,"w");
    if(fp2 == NULL) 
    {
        printf("Cannot create destination file.\n");
        fclose(fp1);
        return 1;
    }

    while((ch=fgetc(fp1)) != EOF) 
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully to %s\n", dest);
    return 0;
}