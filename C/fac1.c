//Swarup Lamsal, 222041, To find factorial using no argument and no return value in function
#include<stdio.h>
void fact();//FUNCTION PROTOTYPE
void main()
{
    fact();//FUNCTION CALL
}

void fact()
{
    int i,n,fac=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("The factorial of %d is %d",n,fac);
}