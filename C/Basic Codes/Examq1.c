#include<stdio.h>
struct details
{
    char name[20];
    int age;
    int salary;
};
void main()
{
  char conf;
  int a=0,b,n;  
  struct details det[3];
  FILE *fp=fopen("details.txt","w");
  do
  {
    fflush (stdin);
    printf("\nRecord number %d:\n\n",a+1);
    printf("Enter the name of worker: ");
    gets(det[a].name);
    printf("Enter the salary: ");
    scanf("%d",&det[a].salary);
    printf("Enter the age: ");
    scanf("%d",&det[a].age);
    fprintf(fp,"Record Number: %d\n\n",a+1);
    fprintf(fp,"Name: %s\n Age: %d\n Salary: %d\n\n",det[a].name,det[a].age,det[a].salary);
    a++;
    printf("\nDo you want to continue?:");
    scanf(" %c",&conf);
    if(conf=='Y' || conf=='y')
    {
        b=1;
    }
    else
    {
        break;
    }
  }while(b=1);
  printf("\n\nEnter the record to be displayed: ");
  scanf("%d",&n);
  printf("Record number: %d\n\n",n);
  printf("Name: %s\nAge: %d\nSalary=%d\n",det[n-1].name,det[n-1].age,det[n-1].salary);
  fclose(fp);
}