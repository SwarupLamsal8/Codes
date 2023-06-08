#include<stdio.h>

void conv(int choice2);
void curr(int cho);

int main()
{
    int choice2;
    printf("\n\n\t\t\t\t*CONVERSION MENU*\n");
    printf("1- CURRENCY\n");
    printf("2- WEIGHT\n");
    printf("3- HEIGHT\n");
    printf("4- TEMPERATURE\n");
    printf("5- BINARY CONVERSION\n");
    printf("7- LENGTH\n");
    printf("\nEnter the choice: ");
    scanf("%d",&choice2);
    conv(choice2);
    return 0;
}

void conv(int choice2)
{
    int cho;
    switch(choice2)
    {
        case 1:
        printf("\n\n\t\t\t\t*CURRENCY CONVERSION*\n");
        printf("1- NRS TO INR\n");
        printf("2- INR TO NRS\n");
        printf("3- NRS TO USD\n");
        printf("4- USD TO NRS\n");
        printf("5- NRS TO EUR\n");
        printf("6- EUR TO NRS\n");
        printf("7- NRS TO AUD\n");
        printf("8- AUD TO NRS\n");
        printf("(AS OF 5th JUNE, 2023)");
        printf("\n\nEnter your choice: ");
        scanf("%d",&cho);
        curr(cho);
        break;

    }
}

//FOR CURRENCY CONVERSION
void curr(int cho)
{
    float ini,final;
    switch(cho)
    {
        case 1:
        printf("\n\nEnter the value NRS: ");
        scanf("%f",&ini);
        final=ini*0.62;
        printf("\nThe value in INR is Rs %f",final);
        break;

        case 2:
        printf("\n\nEnter the value in INR: ");
        scanf("%f",&ini);
        final=ini*1.60;
        printf("\nThe value in NRS is Rs %f",final);
        break;

        case 3:
        printf("\n\nEnter the value in NRS: ");
        scanf("%f",&ini);
        final=ini*0.0076;
        printf("\nThe value in USD is $%f",final);
        break;

        case 4:
        printf("\n\nEnter the value in USD: ");
        scanf("%f",&ini);
        final=ini*132.18;
        printf("\nThe value in NRS is Rs %f",final);
        break;

        case 5:
        printf("\n\nEnter the value in NRS: ");
        scanf("%f",&ini);
        final=ini*0.0071;
        printf("\nThe value in EUR is EURO %f",final);
        break;

        case 6:
        printf("\n\nEnter the value in EUR: ");
        scanf("%f",&ini);
        final=ini*141.64;
        printf("\nThe value in NRS is Rs %f",final);
        break;

        case 7:
        printf("\n\nEnter the value in NRS: ");
        scanf("%f",&ini);
        final=ini*0.011;
        printf("\nThe value in AUD is $%f",final);
        break;

        case 8:
        printf("\n\nEnter the value in NRS: ");
        scanf("%f",&ini);
        final=final*87.56;
        printf("\nThe value in NRS is Rs %f",final);
        break;

        default:
        printf("\n*WRONG CHOICE*");
        break;
    }
}