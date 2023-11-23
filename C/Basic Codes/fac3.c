//Swarup Lamsal, 222041, To find factorial using no argument but and return value in function
#include<stdio.h>
int fact();
void main()
{
    int c;
    c=fact();
    printf("The factorial of the number is %d",c);
}
int fact()
{
    int n,fac=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    return fac;
}