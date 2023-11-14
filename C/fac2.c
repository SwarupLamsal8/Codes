//Swarup Lamsal, 222041, To find factorial using argument but and no return value in function
#include<stdio.h>
void fact(int);//FUNCTION PROTOTYPE
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact(n);
}
void fact(int a)
{
    int fac=1;
    for(int i=1;i<=a;i++)
    {
        fac=fac*i;
    }
    printf("The factorial of %d is %d",a,fac);
}