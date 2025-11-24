/*Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/

#include <stdio.h>

struct Employee 
{
    char name[50];
    int id;
    float salary;
};

int main() 
{
    struct Employee e;
    FILE *fp;

    printf("Enter Name: ");
    scanf("%s", e.name);
    printf("Enter ID: ");
    scanf("%d", &e.id);
    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    fp = fopen("employee.dat","wb");
    if (fp == NULL) 
    {
        printf("Not able to create file\n");
        return 1;
    }

    fwrite(&e,sizeof(e),1,fp);
    fclose(fp);

    fp=fopen("employee.dat","rb");
    if(fp == NULL) 
    {
        printf("Not able to open file\n");
        return 1;
    }

    fread(&e,sizeof(e),1,fp);
    fclose(fp);

    printf("\nReading data from file:\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);

    return 0;
}