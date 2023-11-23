//SWARUP LAMSAL, 222041
#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("\n%d is PRIME Number",n);
    }
    else if(count>2)
    {
        printf("\n%d is COMPOSITE Number",n);
    }
    else
    {
        printf("\n%d is neither PRIME nor COMPOSITE.",n);
    }
}