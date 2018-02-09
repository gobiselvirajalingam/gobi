#include <stdio.h>

int main()
{
    char a[10];
    scanf("%c",a);
    int n;
    n=strlen(a);
    a[n/2]='*';
    printf("%s",a);
}
    
    


