//SWARUP LAMSAL, 222041, Program to check leap year
#include<stdio.h>
void main()
{
    int yr;
    printf("Enter the year: ");
    scanf("%d",&yr);
    if(yr%400==0)
    {
        printf("%d is a leap year.",yr);
    }
    else if(yr%100==0)
    {
        printf("%d is not a leap year.",yr);
    }
    else if(yr%4==0)
    {
        printf("%d is a leap year.",yr);
    }
    else
    {
        printf("%d is not a leap year.",yr);
    }
}