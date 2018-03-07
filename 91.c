#include <stdio.h>

int main()
{
   int l,b,h,v,a;
   printf("enter l,b,h");
   scanf("%d%d%d",&l,&b,&h);
   v=l*b*h;
   printf("volume is %d",v);
   a=2*((l*b)+(b*h)+(h*l));
   printf("area is %d",a);
}
