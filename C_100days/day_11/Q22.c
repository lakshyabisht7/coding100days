
/* Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/
#include <stdio.h>
int main()
{
    
int cp, sp;
printf("Enter Cost price and Selling Price:\n");
scanf("%d %d",&cp,&sp);
if (cp<sp)
{
    int p = sp-cp;
    float pp = (float)p/cp*100.0;
    printf("Profit %f",pp);
}

else if (cp>sp)
{
    int l = cp-sp;
    float lp = (float)l/cp*100.0;
    printf("Loss %f",lp);
}
else 
printf("No profit no loss");

return 0;
}
