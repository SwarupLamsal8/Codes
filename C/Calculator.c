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
int percen(int nos);
int conver(int choice2);
//TRIGONOMETRIC VALUES LEFT

//MAIN FUNCTION
int main()
{
    //DECLARATION OF ALL DATA TYPES
    int choice,choice2;
    float num1,num2,result;

    //FOR TOTAL NUMBER OF SUBJECTS:
    int nos; 
    
    //FOR ASKING THE USER TO USE THE CALCULATOR FURTHER
    char conf;

    //CALCULATOR LOOP
    do
    {
    //INITIAL USER-INTERFACE FOR THE USER
    printf("\n\n\n\t\t\t*MULTI-FEATURED CALCULATOR*\n\n");
    printf("Enter the type of Calculation you want to perform from the menu below-\n\n");
    printf("\t\t\t\t *MENU*\n");
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
    printf("12- EXIT PROGRAM\n");


    //INITIAL INTERACTION WITH THE USER OF PROGRAM
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
            
        break;
        
    case 2:
        
            printf("\nENTER THE FIRST NUMBER: ");
            scanf("%f",&num1);
            printf("ENTER THE SECOND NUMBER: ");
            scanf("%f",&num2);
            diff(num1,num2);
        break;

    case 3:
            printf("\nENTER THE FIRST NUMBER: ");
            scanf("%f",&num1);
            printf("ENTER THE SECOND NUMBER: ");
            scanf("%f",&num2);
            mult(num1,num2);
        break;

    case 4:
            printf("\nENTER THE FIRST NUMBER: ");
            scanf("%f",&num1);
            printf("ENTER THE SECOND NUMBER: ");
            scanf("%f",&num2);
            divi(num1,num2);
        break;

    case 5:
            printf("\nENTER THE NUMBER: ");
            scanf("%f",&num1);
            sq(num1);
        break;

    case 6:
            printf("\nENTER THE NUMBER: ");
            scanf("%f",&num1);
            cu(num1);
        break;

    case 7:
            printf("\nENTER THE NUMBER: ");
            scanf("%f",&num1);
            sq_rt(num1);
        break;
    
    case 8:
            printf("\nENTER THE NUMBER: ");
            scanf("%f",&num1);
            cu_rt(num1);
        break;

    case 9:
            printf("\n\nENTER THE TOTAL NUMBER OF SUBJECTS: ");
            scanf("%d",&nos);
            float result = percen(nos);
            printf("\nThe total percentage in %d subjects is: %f",nos,result);
        break;

    case 10:
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
            
        break;

    case 12:
            exit(1);
    break;

    default:
        break;
    }
    //LOOP THE CALCULATOR AFTER ASKING FOR CONFORMATION
     printf("\nDO YOU WANT TO CARRYOUT FURTHER CALCULATIONS?(Y/N) ");
     scanf(" %c", &conf);
    }while(conf=='Y');

    return 0;
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

int divi(float num1,float num2)
    {
        float result=num1/num2;
        printf("\n\nTHE DIVISION BETWEEN %f and %f IS: %f",num1,num2,result);
        return 0;
    }

int sq(float num1)
    {
        float result=num1*num1;
        printf("\n\nTHE SQUARE OF %f IS: %f",num1,result);
        return 0;
    } 

int cu(float num1)
    {
        float result=pow(num1,3);
        printf("\n\nTHE CUBE OF %f IS: %f",num1,result);
        return 0;
    }

int sq_rt(float num1)
    {
        float result=sqrt(num1);
        printf("\n\nTHE SQUARE ROOT OF %f IS: %f",num1,result);
        return 0;
    }

int cu_rt(float num1)
    {
        float result=pow(num1,(1.0/3.0));
        printf("\n\nTHE CUBE ROOT OF %f IS: %f",num1,result);
        return 0;
    }

int percen(int nos)
{
        int i;
        float n[100],obt = 0, total;
        
        int percent;
        for(i=1;i<=nos;i++)
        {
            //FOR THE TOTAL NUMBER OF SUBJECTS
            printf("\nENTER THE MARKS IN SUBJECT %d: ",i);
            scanf("%f",&n[i]);
            obt=obt+n[i];
            total = total + 100;
        }
        percent=(obt * 100)/total;
        return percent;
}


