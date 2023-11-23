#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    char temp;
};
void main()
{
    struct student a[3];
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter name of student %d: ",i+1);
        gets(a[i].name);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            if(a[j].name[0]<a[j].name[0])
            {
                char temp;
                strcpy(temp,a[j].name);
                strcpy(a[j].name,a[j+1].name);
                strcpy(a[j+1].name,temp);
            }
        }
    }
    printf("\n\nNames:\n");
    for(int i=0;i<n;i++)
    {
        printf("\n%s\n",a[i].name);
    }
}