#include<stdio.h>


struct student
{
    char name[20];
    int roll;
    char address[20];
};
int main()
{

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    struct student s[5];
    for(int i=0; i<n; i++)
    {
        printf("Enter name of student %d: ",i);
        scanf("%s",&s[i].name);
        printf("Enter roll no. for student %d: ",i);
        scanf("%d",&s[i].roll);
        printf("Enter address of student %d: ",i);
        scanf("%s",&s[i].address);

    }

    for(int i=0; i<n; i++)
    {
        printf("Name: %s\nAddress: %s\nRoll: %d",s[i].name,s[i].address,s[i].roll);
    }

    return 0;
}