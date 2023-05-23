//Swarup Lamsal, 222041, BCA 2nd Sem
#include<stdio.h>
void main()
{
    int day;
    printf("Enter the day: ");
    scanf("%d",&day);
    switch(day)
    {
    case 1:
            printf("\tSunday");
            break;
    case 2:
            printf("\tMonday");
            break;
    case 3:
            printf("\tTuesday");
            break;
    case 4:
            printf("\tWednesday");
            break;
    case 5:
            printf("\tThursday");
            break;
    case 6:
            printf("\tFriday");
            break;
    case 7:
            printf("\tSaturday");
            break;
    }
}