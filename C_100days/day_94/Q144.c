/*Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

struct Student 
{
    char name[50];
    int roll;
    float marks;
};

void displayStudent(struct Student s) 
{
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll, s.marks);
}

int main() 
{
    struct Student s;

    scanf("%s %d %f", s.name, &s.roll, &s.marks);

    displayStudent(s);

    return 0;
}
