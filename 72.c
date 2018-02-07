
#include<stdio.h>
int main()
{
    char a[10];
    int i;
printf("enter");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
{
   printf("yes"); 
}
}
}

