#include <stdio.h>

int main()
{
    int i,n,a[20];
    printf("enter number");
    scanf("%d",&n );

    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<=n;i++)
    {
        if(i==n)
        {
            printf("%d",a[i]);
        }
    }
    }
