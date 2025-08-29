/*Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/
#include <stdio.h>
int main()
{
    float rad, area, cir;
    float pi = 3.142;
    printf("Enter radius of given circle\n");
    scanf("%f",&rad);
    area = pi*rad*rad;
    cir = 2*pi*rad;

    printf("Area = %f, Circumference = %f",area,cir);
    
    return 0;
}