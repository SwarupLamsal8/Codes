// SWARUP LAMSAL, 222041, Program to check leap year
#include <stdio.h>
void main()
{
    int yr;
    printf("Enter the year: ");
    scanf("%d", &yr);
    if (year % 400 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
}