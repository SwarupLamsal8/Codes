//Swarup Lamsal, 222041
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stud
{
    char name[50];
    int roll;
    int marks[30];
};
void main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct stud s[3];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the Record of Student number %d:",i+1);
        printf("\n\nName: ");
        scanf("%s",s[i].name);
        printf("Roll: ");
        scanf("%d",&s[i].roll);
        printf("Marks: \n");
        for(int j=0;j<3;j++)
        {
            printf("Marks of subject %d: ",j+1);
            scanf("%d",&s[i].marks[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("\n\nRecord Display:\n\n");
        printf("Name: %s\n",s[i].name);
        printf("Roll: %d\n",s[i].roll);
        printf("Marks of Subjects:\n");
        for(int j=0;j<3;j++)
        {
            printf("Marks of subject number 1: %d\n",s[i].marks[j]);
        }
    }
}