//SWARUP LAMSAL, 222041
#include<stdio.h>
int x,y;//GLOBAL VARIABLE
void sum();
void main()
{
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    sum();
}
void sum()
{
    int c=x+y;
    printf("The sum of %d and %d is %d",x,y,c);
}
