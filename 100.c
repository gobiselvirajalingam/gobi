#include <stdio.h>

int main()
{
    int n,s=1,a;
    printf("enter number");
    scanf("%d",&n); 
    while(n!=0)
    {
        a=n%10;
        s=s*a;
        n=n/10;
    }
    printf("%d",s);
}
