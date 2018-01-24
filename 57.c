#include <stdio.h>
 
int main()
{
   int x, y, t;
 
   printf("Enter the value of x and y");
   scanf("%d%d", &x, &y);
 
   printf("Before Swapping x = %dy = %d",x,y);
 
   t = x;
   x    = y;
   y    = t;
 
   printf("After Swappingx = %dy = %d",x,y);
 }
