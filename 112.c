#include<stdio.h>
int main(void)
{
int a[10],i,n,m,flag=0;
printf("enter the number:");
scanf("%d%d",&n,&m);
for(i=0;a[i]<n;i++)
{
    if(a[i]==m)
    {
        flag=1;
    }
}
if(flag==1)
{
    printf("yes");

}
else
{
    printf("no");
}
}
