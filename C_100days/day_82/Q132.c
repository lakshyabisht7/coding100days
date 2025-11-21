/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/

#include <stdio.h>
#include <string.h>

enum Light {RED, YELLOW, GREEN};

int main() 
{
    char input[20];
    enum Light l;

    printf("Enter light (RED/GREEN/BLUE): ");
    scanf("%s",input);

    // Convert string to enum
    if(strcmp(input,"RED") == 0)
    l=RED;

    else if(strcmp(input,"YELLOW") == 0)
    l = YELLOW;
    
    else
    l = GREEN;

    switch (l) 
    {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }
    return 0;
}
