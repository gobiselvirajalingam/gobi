#include <stdio.h>

int main()
{
    int a,b,c,n;
    printf("enter number");
    scanf("%d%d%d",&a,&b,&c); 
    if(a>0)
    {
        n=(a*b)%c;
    }
    printf("%d",n);
}
