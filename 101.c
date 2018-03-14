#include<stdio.h>
#include<string.h>
void main()
{
int n,i,l,c;
char a[30];
printf("enter character");
scanf("%s",&a[i]);
printf("enter number");
scanf("%d",&n);
l=strlen(a);
c=l-n;
for(i=c;i<=l;i++)
    {
    printf("%c",a[i]);
}
}
