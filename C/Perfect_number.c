//SWARUP LAMSAL 222041
#include<stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==n)
    {
        printf("%d is perfect number.",n);
    }
    else
    {
        printf("%d is not perfect number.",n);
    }
    return 0;
}