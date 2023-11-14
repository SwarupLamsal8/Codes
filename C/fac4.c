//Swarup Lamsal, 222041, To find factorial using argument and return value in function
#include<stdio.h>
int fact(int);
void main()
{
    int n,c;
    printf("Enter the number: ");
    scanf("%d",&n);
    c=fact(n);
    printf("The factorial of %d is %d",n,c);
}
int fact(int a)
{
    int fac=1;
    for(int i=1;i<=a;i++)
    {
        fac=fac*i;
    }
    return fac;
}