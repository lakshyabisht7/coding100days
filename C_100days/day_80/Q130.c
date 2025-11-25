/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    int marks;
};

int main() 
{
    int n;
    struct Student s;
    FILE *fp;

    printf("Enter number of students: ");
    scanf("%d",&n);

    fp=fopen("students.txt","w");
    if(fp == NULL) 
    {
        printf("Error while creating file.\n");
        return 1;
    }

    for(int i=0; i<n; i++) 
    {
        printf("Enter details of student %d:\n", (i+1));
        printf("Name: ");
        scanf("%s",s.name);
        printf("Roll: ");
        scanf("%d",&s.roll);
        printf("Marks: ");
        scanf("%d",&s.marks);

        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp=fopen("students.txt","r");
    if(fp == NULL) 
    {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("\nStored Records:\n");
    while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) == 3) 
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",s.name,s.roll,s.marks);
    }
    fclose(fp);

    return 0;
}
