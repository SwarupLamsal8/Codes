//SWARUP LAMSAL, 222041
#include<stdio.h>
void sum(int);
void main()
{
    int a,b,c;//LOCAL VARIABLE
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    c=a+b;
    printf("The sum of %d and %d is %d",a,b,c);
    sum(c);
    printf("\n\nAFTER MODIFICATION(c=c*2) IN SUM FUNCTION AND DISPLAYING IN MAIN FUNCTION:\n");
    printf("The value of c is %d",c);
}
void sum(int c)
{
    c=c*2;
    printf("\n\nAFTER MODIFICATION(c=c*2) IN SUM FUNCTION AND DISPLAYING IN SUM FUNCTION:\n");
    printf("The value of c is %d",c);
}