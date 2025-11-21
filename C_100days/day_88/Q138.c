/*Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
*/
#include <stdio.h>
enum signal
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum signal s;
    const char *name[]={"RED", "YELLOW", "GREEN"};
    for(s=RED; s <= GREEN; s++)
    {
        printf("%s=%d\n", name[s], s);
    }
    return 0;
}