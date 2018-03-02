#include <stdio.h>

int main()
{
    int i,n,a=0;
    printf("enter number");
    scanf("%d",&n);                                                                                                                                
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if(a==0)
    {
        printf("prime%d",n);
    }
    else
    {
        printf("composite%d",n);
    }
}
