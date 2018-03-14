#include<stdio.h>
#include<string.h>
 
int main() 
{
   char s[100];
 
   printf("Enter String : ");
   gets(s);
 
   strupr(s);
   printf("String after strupr : %s", s);
 
  
}
