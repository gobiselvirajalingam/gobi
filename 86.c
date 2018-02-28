#include<stdio.h>
#include<string.h>
int main()
{ 
    char a[30]="hello";
    int i,j,g=0;
   
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                g++;
            }
            
        }
    } 
    

if(g==1)
{
    printf("no");
}
else
{
    printf("yes");
}
}

