//SWARUP LAMSAL, 222041
#include<stdio.h>
void sum(int,int,int);
void main()
{
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    sum(a,b,c);//CALL BY VALUE
    printf("The sum of %d and %d is %d",a,b,c);
}

void sum(int a,int b,int c)
{
    c=a+b;
}