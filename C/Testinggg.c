#include<stdio.h>
int conv(int choice2);
int main()
{
    int choice2;
    printf("\n\n\t\t\t\t*CONVERSION MENU*\n");
    printf("1- CURRENCY\n");
    printf("2- WEIGHT\n");
    printf("3- HEIGHT\n");
    printf("4- TEMPERATURE\n");
    printf("5- BINARY TO DECIMAL\n");
    printf("6- DECIMAL TO BINARY\n");
    printf("7- LENGTH\n");
    printf("\nEnter the choice: ");
    scanf("%d",&choice2);
    conv(choice2);
    return 0;
}

int conv(int choice2)
{
    if(choice2==1)
    printf("Hello World");
    return 0;
}