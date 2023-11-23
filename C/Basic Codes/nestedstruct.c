//Swarup Lamsal, 222041
#include<stdio.h>
struct dateofbirth
{
    int mth;
    int day;
    int yr;
};
struct details
{
    char name[50];
    int roll;
    struct dateofbirth dob;
};
void main()
{
    int n;
    printf("Enter the number of records: ");
    scanf("%d",&n);
    struct details d[3];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the details of Student Number %d:\n",i+1);
        printf("Enter the name: ");
        scanf("%s",d[i].name);
        printf("Enter the Roll Number: ");
        scanf("%d",&d[i].roll);
        printf("Enter the Date-of-brith(mm/dd/yy): ");
        scanf("%d%d%d",&d[i].dob.mth,&d[i].dob.day,&d[i].dob.yr);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nDetails of Student Number %d:\n",i+1);
        printf("Name: %s",d[i].name);
        printf("\nRoll Number: %d",d[i].roll);
        printf("\nDate-of-brith(mm/dd/yy): %d/%d/%d\n\n",d[i].dob.mth,d[i].dob.day,d[i].dob.yr);
    }
}