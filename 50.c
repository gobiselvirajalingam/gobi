
#include <stdio.h>
int b[32] = {0}, j = 0, n, i, c = 0;
 void main()
{
unsigned int n1;
printf("enter value");
scanf("%d", &n1);
powerof2(n1);
if (c == 1)
printf("yes");
else
printf("no");
}
int powerof2(unsigned int num)
{
while (n1 != 0)
{
n = n1 % 2;
if (n == 1)
c++;        
n1 = n1 / 2;
}
}
