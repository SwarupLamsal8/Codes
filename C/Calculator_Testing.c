#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//DECLARING ALL THE FUNCTIONS
int sum(float num1,float num2);
int diff(float num1,float num2);
int mult(float num1,float num2);
int divi(float num1,float num2);
int sq(float num1);
int cu(float num1);
int sq_rt(float num1);
int cu_rt(float num1);
//CONVERSION FUNCTION LEFT
//TRIGONOMETRIC VALUES LEFT

//MAIN FUNCTION
void main()
{

    
    //DECLARATION OF ALL DATA TYPES
    int choice;
    float num1,num2,result;
    char conf;
    
    /*FOR ASKING THE USER IF THEY WANT TO CALCULATE FURTHER:
    char conf;*/

    //INITIAL INTERACTION WITH THE USER OF PROGRAM
    
    //for infinite loop use while 

    do
        {
            //first:FOR GOTO
    //INITIAL USER-INTERFACE FOR THE USER
    printf("\n\n\t\t\t*BASIC CALCULATOR*\n\n");
    printf("Enter the type of Calculation you want to perform from the menu below-\n\n");
    printf("\t\t\t      MENU\n");
    printf("1- ADDITION\n");
    printf("2- SUBSTRACTION\n");
    printf("3- MULTIPLICATION\n");
    printf("4- DIVISION\n");
    printf("5- SQUARE OF A NUMBER\n");
    printf("6- CUBE OF THE NUMBER\n");
    printf("7- SQUARE-ROOT\n");
    printf("8- CUBE-ROOT\n");
    printf("9- PERCENTAGE\n");
    printf("10- CONVERSION\n");
    printf("11- TRIGONOMETRIC VALUES\n");
    printf("12- Exit program\n");
    printf("\nENTER YOUR CHOICE FROM THE MENU ABOVE: ");
    scanf("%d",&choice);
    //SWITCH CASE FOR THE CALCULATION
    switch (choice)
    {
    case 1:
    
            printf("\nENTER THE FIRST NUMBER: ");
            scanf("%f",&num1);
            printf("ENTER THE SECOND NUMBER: ");
            scanf("%f",&num2);
            sum(num1,num2);

            //ALSO TRIED
            /*printf("\nDO YOU WANT TO CARRYOUT FURTHER CALCULATIONS?(Y/N)");
            scanf("%c",&conf);
            if (conf='Y')
            {
                goto first;
            }*/
        break;
        
    case 2:
        
            printf("\nENTER THE FIRST NUMBER: ");
            scanf("%f",&num1);
            printf("ENTER THE SECOND NUMBER: ");
            scanf("%f",&num2);
            diff(num1,num2);
        break;
    case 12:
        exit(1);
        


    default:
        break;
    }
        printf("\nDO YOU WANT TO CARRYOUT FURTHER CALCULATIONS?(Y/N) ");
        scanf(" %c", &conf);
        }while(conf=='Y');
    getch();
}

//USER-DEFINED FUNCTION
int sum(float num1,float num2)
    {
        float result=num1+num2;
        printf("\n\nTHE SUM OF %f and %f IS: %f",num1,num2,result);
        return 0;
    }

int diff(float num1,float num2)
    {
        float result=num1-num2;
        printf("\n\nTHE DIFFERENCE BETWEEN %f and %f IS: %f",num1,num2,result);
        return 0;
    }

int mult(float num1,float num2)
    {
        float result=num1*num2;
        printf("\n\nTHE MULTIPLICATION BETWEEN %f and %f IS: %f",num1,num2,result);
        return 0;
    }