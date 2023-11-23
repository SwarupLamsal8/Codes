#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

//DECLARING ALL THE FUNCTIONS
float sum(float num1,float num2);
float diff(float num1,float num2);
float mult(float num1,float num2);
float divi(float num1,float num2);
float sq(float num1);
float cu(float num1);
float sq_rt(float num1);
float cu_rt(float num1);
float percen(int nos);
//TRIGONOMETIC VALUES
void trigo(int choice2);
//CONVERSIONS
void conv(int choice2);
void curr(int cho);
void mass(int cho);
void length(int cho);
void temperature(int cho);
void time(int cho);


//MAIN FUNCTION
int main()
{
    FILE *fp=fopen("cal.txt","w");
    fprintf(fp,"Records of Calculations:\n");
    fclose(fp);
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
    //INITIAL USER-INTERFACE
    FILE *fp=fopen("cal.txt","a");
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
    printf("11- TRIGONOMETRIC VALUES of DEGREES\n");
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
            result=sum(num1,num2);
            fprintf(fp,"\n\nSUM:\nTHE SUM OF %.2f and %.2f IS: %.2f\n",num1,num2,result);
        break;
        
    case 2:
        
            printf("\nENTER THE FIRST NUMBER: ");
            scanf("%f",&num1);
            printf("ENTER THE SECOND NUMBER: ");
            scanf("%f",&num2);
            result=diff(num1,num2);
            fprintf(fp,"\n\nDIFFERENCE:\nTHE DIFFERENCE BETWEEN %.2f and %.2f IS: %.2f\n",num1,num2,result);
        break;

    case 3:
            printf("\nENTER THE FIRST NUMBER: ");
            scanf("%f",&num1);
            printf("ENTER THE SECOND NUMBER: ");
            scanf("%f",&num2);
            result=mult(num1,num2);
            fprintf(fp,"\n\nMULTIPLICATION:\nTHE MULTIPLICATION BETWEEN %.2f and %.2f IS: %.3f\n",num1,num2,result);
        break;

    case 4:
            printf("\nENTER THE FIRST NUMBER: ");
            scanf("%f",&num1);
            printf("ENTER THE SECOND NUMBER: ");
            scanf("%f",&num2);
            result=divi(num1,num2);
            fprintf(fp,"\n\nDIVISION:\nTHE DIVISION BETWEEN %.2f and %.2f IS: %.3f\n",num1,num2,result);
        break;

    case 5:
            printf("\nENTER THE NUMBER: ");
            scanf("%f",&num1);
            result=sq(num1);
            fprintf(fp,"\n\nSQUARE:\nTHE SQUARE OF %.2f IS: %.2f\n",num1,result);
        break;

    case 6:
            printf("\nENTER THE NUMBER: ");
            scanf("%f",&num1);
            result=cu(num1);
            fprintf(fp,"\n\nCUBE:\nTHE CUBE OF %.2f IS: %.2f\n",num1,result);
        break;

    case 7:
            printf("\nENTER THE NUMBER: ");
            scanf("%f",&num1);
            result=sq_rt(num1);
            fprintf(fp,"\n\nSquare Root:\nTHE SQUARE ROOT OF %.2f IS: %.3f\n",num1,result);
        break;
    
    case 8:
            printf("\nENTER THE NUMBER: ");
            scanf("%f",&num1);
            result=cu_rt(num1);
            fprintf(fp,"\n\nCube Root\nTHE CUBE ROOT OF %.2f IS: %.3f\n",num1,result);
        break;

    case 9:
            printf("\n\nENTER THE TOTAL NUMBER OF SUBJECTS: ");
            scanf("%d",&nos);
            result = percen(nos);
            printf("\nThe total percentage in %d subjects is: %.2f",nos,result);
            fprintf(fp,"\n\nPercentage: \nThe total percentage in %d subjects is: %.2f\n",nos,result);
        break;

    case 10:
            printf("\n\n\t\t\t\t*CONVERSION MENU*\n");
            printf("1- CURRENCY\n");
            printf("2- MASS\n");
            printf("3- LENGTH\n");
            printf("4- TEMPERATURE\n");
            printf("5- TIME\n");
            printf("\nEnter the choice: ");
            scanf("%d",&choice2);
            fclose(fp);
            conv(choice2);  
        break;

    case 11:
            printf("\n\n\t\t\t\t*TRIGONOMETRIC VALUES OF DEGREES*\n");
            printf("1- Sin(x)\n");
            printf("2- Cos(x)\n");
            printf("3- Tan(x)\n");
            printf("4- Sec(x)\n");
            printf("5- Cosec(x)\n");
            printf("6- Cot(x)\n");
            printf("Enter the choice: ");
            scanf("%d",&choice2);
            fclose(fp);
            trigo(choice2);
            break;

    case 12:
            exit(1);
    break;

    default:
        break;
    }
    //LOOP THE CALCULATOR AFTER ASKING FOR CONFORMATION
     printf("\n\n\nDO YOU WANT TO CARRYOUT FURTHER CALCULATIONS?(Y/N) ");
     scanf(" %c", &conf);
    }while(conf=='Y');
    fclose(fp);
    return 0;
}

//USER-DEFINED FUNCTION
float sum(float num1,float num2)
    {
        float result=num1+num2;
        printf("\n\nTHE SUM OF %.2f and %.2f IS: %.2f",num1,num2,result);
        return result;
    }

float diff(float num1,float num2)
    {
        float result=num1-num2;
        printf("\n\nTHE DIFFERENCE BETWEEN %.2f and %.2f IS: %.2f",num1,num2,result);
        return result;
    }

float mult(float num1,float num2)
    {
        float result=num1*num2;
        printf("\n\nTHE MULTIPLICATION BETWEEN %.2f and %.2f IS: %.3f",num1,num2,result);
        return result;
    }

float divi(float num1,float num2)
    {
        float result=num1/num2;
        printf("\n\nTHE DIVISION BETWEEN %.2f and %.2f IS: %.3f",num1,num2,result);
        return result;
    }

float sq(float num1)
    {
        float result=num1*num1;
        printf("\n\nTHE SQUARE OF %.2f IS: %.2f",num1,result);
        return result;
    } 

float cu(float num1)
    {
        float result=pow(num1,3);
        printf("\n\nTHE CUBE OF %.2f IS: %.2f",num1,result);
        return result;
    }

float sq_rt(float num1)
    {
        float result=sqrt(num1);
        printf("\n\nTHE SQUARE ROOT OF %.2f IS: %.3f",num1,result);
        return result;
    }

float cu_rt(float num1)
    {
        float result=pow(num1,(1.0/3.0));
        printf("\n\nTHE CUBE ROOT OF %.2f IS: %.3f",num1,result);
        return result;
    }

float percen(int nos)
{
        int i;
        float n[100],obt = 0, total=0;
        
        float percent;
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

        case 2:
        printf("\n\n\t\t\t\t*WEIGHT CONVERSION*\n");
        printf("1- KILOGRAM TO GRAM\n");
        printf("2- GRAM TO KILOGRAM\n");
        printf("3- KILOGRAM TO POUNDS(lbs)\n");
        printf("4- POUNDS TO KILOGRAM\n");
        printf("5- KILOGRAMS TO TONNE(STANDARD)\n");
        printf("6- TONNE(STANDARD) TO KILOGRAMS\n");
        printf("7- KILOGRAMS TO TONNE(US)\n");
        printf("8- TONNE(US) TO KILOGRAMS\n");
        printf("9- GRAM TO OUNCE\n");
        printf("10- OUNCE TO GRAM\n");
        printf("\nEnter your choice: ");
        scanf("%d",&cho);
        mass(cho);
        break;

        case 3:
        printf("\n\n\t\t\t\t*LENGTH CONVERSION*\n");
        printf("1- METER TO CENTIMETER\n");
        printf("2- CENTIMETER TO METER\n");
        printf("3- METER TO KILOMETER\n");
        printf("4- KILOMETER TO METER\n");
        printf("5- METRE TO FEET AND INCHES\n");
        printf("6- FEET and INCHES TO METER\n");
        printf("7- CENTIMETER TO FEET AND INCHES\n");
        printf("8- FEET AND INCHES TO CENTIMETER\n");
        printf("\nEnter your choice: ");
        scanf("%d",&cho);
        length(cho);
        break;

        case 4:
        printf("\n\n\t\t\t\t*TEMPERATURE CONVERSION*\n");
        printf("1-CELSIUS TO FAHRENHEIT\n");
        printf("2-FAHRENHEIT TO CELSIUS\n");
        printf("3-CELSIUS TO KELVIN\n");
        printf("4-KELVIN TO CELSIUS\n");
        printf("5-FAHRENHEIT TO KELVIN\n");
        printf("6-KELVIN TO FAHRENHEIT\n");
        printf("\nEnter your choice: ");
        scanf("%d",&cho);
        temperature(cho);
        break;

        case 5:
        printf("\n\n\t\t\t\t*TIME CONVERSION*\n");
        printf("1-MINUTES TO SECONDS\n");
        printf("2-SECONDS TO MINUTES\n");
        printf("3-HOURS TO SECONDS\n");
        printf("4-SECONDS TO HOURS\n");
        printf("5-DAYS TO SECONDS\n");
        printf("6-DAYS TO MINUTES\n");
        printf("7-DAYS TO HOURS\n");
        printf("8-MONTHS TO SECONDS\n");
        printf("9-MONTHS TO MINUTES\n");
        printf("10-YEARS TO MINUTES\n");
        printf("\nEnter your choice: ");
        scanf("%d",&cho);
        time(cho);
        break;
        
    
        default:
        printf("\nINVALID CHOICE: ");
        break;

    }
}

//FOR CURRENCY CONVERSION
void curr(int cho)
{
    FILE *fp=fopen("cal.txt","a");
    fprintf(fp,"\n\nCurrency Conversion:\n");
    float ini,final;
    switch(cho)
    {
        case 1:
        printf("\n\nEnter the value NRS: ");
        scanf("%f",&ini);
        final=ini*0.62;
        printf("\nThe value in INR is Rs %.2f",final);
        fprintf(fp,"\nNRS Rs %.2f = INR Rs %.2f",ini,final);
        fclose(fp);
        break;

        case 2:
        printf("\n\nEnter the value in INR: ");
        scanf("%f",&ini);
        final=ini*1.60;
        printf("\nThe value in NRS is Rs %.2f",final);
        fprintf(fp,"\nINR Rs %.2f = NRS Rs %.2f",ini,final);
        fclose(fp);
        break;

        case 3:
        printf("\n\nEnter the value in NRS: ");
        scanf("%f",&ini);
        final=ini*0.0076;
        printf("\nThe value in USD is $%.2f",final);
        fprintf(fp,"\nNRS Rs %.2f = USD $%.2f",ini,final);
        fclose(fp);
        break;

        case 4:
        printf("\n\nEnter the value in USD: ");
        scanf("%f",&ini);
        final=ini*132.18;
        printf("\nThe value in NRS is Rs %.2f",final);
        fprintf(fp,"\nUSD $%.2f = NRS Rs %.2f",ini,final);
        fclose(fp);
        break;

        case 5:
        printf("\n\nEnter the value in NRS: ");
        scanf("%f",&ini);
        final=ini*0.0071;
        printf("\nThe value in EUR is EURO %.2f",final);
        fprintf(fp,"\nNRS Rs %.2f = EURO %.2f",ini,final);
        fclose(fp);
        break;

        case 6:
        printf("\n\nEnter the value in EUR: ");
        scanf("%f",&ini);
        final=ini*141.64;
        printf("\nThe value in NRS is Rs %.2f",final);
        fprintf(fp,"\nEURO %.2f = NRS Rs %.2f",ini,final);
        fclose(fp);
        break;

        case 7:
        printf("\n\nEnter the value in NRS: ");
        scanf("%f",&ini);
        final=ini*0.011;
        printf("\nThe value in AUD is $%.2f",final);
        fprintf(fp,"\nNRS Rs %.2f = AUD $%.2f",ini,final);
        fclose(fp);
        break;

        case 8:
        printf("\n\nEnter the value in AUD: ");
        scanf("%f",&ini);
        final=final*87.56;
        printf("\nThe value in NRS is Rs %.2f",final);
        fprintf(fp,"\nAUD $%.2f = NRS Rs %.2f",ini,final);
        fclose(fp);
        break;

        default:
        printf("\nINVALID CHOICE: ");
        break;
    }
}

//FOR MASS CONVERSION
void mass(int cho)
{
    FILE *fp=fopen("cal.txt","a");
    fprintf(fp,"\n\nMass Conversion:\n");
    float ini,final;
    switch(cho)
    {
        case 1:
        printf("\n\nEnter the mass in KILOGRAM: ");
        scanf("%f",&ini);
        final=ini*1000;
        printf("\nThe mass in GRAM is %.3f gm",final);
        fprintf(fp,"\n%.3f kg = %.3f gm",ini,final);
        fclose(fp);
        break;

        case 2:
        printf("\n\nEnter the mass in GRAM: ");
        scanf("%f",&ini);
        final=ini/1000;
        printf("\nThe mass in KILOGRAM is %.4f kg",final);
        fprintf(fp,"\n%.3f gm = %.3f kg",ini,final);
        fclose(fp);
        break;

        case 3:
        printf("\n\nEnter the mass in KILOGRAM: ");
        scanf("%f",&ini);
        final=ini*2.20462;
        printf("\nThe mass in POUNDS(lbs) is %.4f lbs",final);
        fprintf(fp,"\n%.3f kg = %.3f lbs",ini,final);
        fclose(fp);
        break;

        case 4:
        printf("\n\nEnter the mass in POUNDS(lbs): ");
        scanf("%f",&ini);
        final=ini/2.20462;
        printf("\nThe mass in KILOGRAM is %.4f kg",final);
        fprintf(fp,"\n%.3f lbs = %.3f kg",ini,final);
        fclose(fp);
        break;

        case 5:
        printf("\n\nEnter the mass in KILOGRAM: ");
        scanf("%f",&ini);
        final=ini/1000;
        printf("\nThe mass in TONNE(STANDARD) is %.4f tonne",final);
        fprintf(fp,"\n%.3f kg = %.3f tonne(std)",ini,final);
        fclose(fp);
        break;

        case 6:
        printf("\n\nEnter the mass in TONNE(STANDARD): ");
        scanf("%f",&ini);
        final=ini*1000;
        printf("\nThe mass in KILOGRAM is %.4f kg",final);
        fprintf(fp,"\n%.3f tonne(std) = %.3f kg",ini,final);
        fclose(fp);
        break;


        case 7:
        printf("\n\nEnter the mass in KILOGRAM: ");
        scanf("%f",&ini);
        final=ini/907.185;
        printf("\nThe mass in TONNE(US) is %.4f tonne",final);
        fprintf(fp,"\n%.3f kg = %.3f tonne(us)",ini,final);
        fclose(fp);
        break;

        case 8:
        printf("\n\nEnter the mass in TONNE(US): ");
        scanf("%f",&ini);
        final=ini*907.185;
        printf("\nThe mass in KILOGRAM is %.4f kg",final);
        fprintf(fp,"\n%.3f tonne(us) = %.3f kg",ini,final);
        fclose(fp);
        break;

        case 9:
        printf("\n\nEnter the mass in GRAM: ");
        scanf("%f",&ini);
        final=ini/28.3495;
        printf("\nThe mass in OUNCE is %.4f oz",final);
        fprintf(fp,"\n%.3f gm = %.3f oz",ini,final);
        fclose(fp);
        break;

        case 10:
        printf("\n\nEnter the mass in OUNCE: ");
        scanf("%f",&ini);
        final=ini*28.3495;
        printf("\nThe mass in GRAM is %.3f gm",final);
        fprintf(fp,"\n%.3f oz = %.3f gm",ini,final);
        fclose(fp);
        break;

        default:
        printf("\nINVALID CHOICE: ");
        break;

    }
}

//FOR LENGTH CONVERSION
void length(int cho)
{
    FILE *fp=fopen("cal.txt","a");
    fprintf(fp,"\n\nLength Conversion:\n");
    float ini,final;
    int ft=0;
    switch(cho)
    {
        case 1:
        printf("\n\nEnter the length in METER: ");
        scanf("%f",&ini);
        final=ini*100;
        printf("\nThe length in CENTIMETER is %.4f cm",final);
        fprintf(fp,"\n%.3f m = %.3f cm",ini,final);
        fclose(fp);
        break;

        case 2:
        printf("\n\nEnter the length in CENTIMETER: ");
        scanf("%f",&ini);
        final=ini/100;
        printf("\nThe length in METER is %.4f m",final);
        fprintf(fp,"\n%.3f cm = %.3f m",ini,final);
        fclose(fp);
        break;

        case 3:
        printf("\n\nEnter the length in METER: ");
        scanf("%f",&ini);
        final=ini/1000;
        printf("\nThe length in KILOMETER is %.4f km",final);
        fprintf(fp,"\n%.3f m = %.3f km",ini,final);
        fclose(fp);
        break;

        case 4:
        printf("\n\nEnter the length in KILOMETER: ");
        scanf("%f",&ini);
        final=ini*1000;
        printf("\nThe length in METER is %.4f m",final);
        fprintf(fp,"\n%.3f km = %.3f m",ini,final);
        fclose(fp);
        break;

        case 5:
        printf("\n\nEnter the length in METER: ");
        scanf("%f",&ini);
        final=ini*39.3701;
        while(final>=12)
        {
            ft=ft+1;
            final=final-12;
        }
        printf("\nThe length in feet and inches is %dft and %dinches",ft,(int)final);
        fprintf(fp,"\n%.3f m = %d ft and %d inches",ini,ft,(int)final);
        fclose(fp);
        break;

        case 6:
        printf("\n\nEnter the length in FEET: ");
        scanf("%d",&ft);
        printf("\nEnter the length in INCHES: ");
        scanf("%f",&ini);
        ini=ini+(ft*12);
        final=ini/39.3701;
        printf("\nThe length in METER is %.4f m",final);
        fprintf(fp,"\n%d ft and %.3f inches = %.3f m",ft,ini,final);
        fclose(fp);
        break;

        case 7:
        printf("\n\nEnter the length in CENTIMETER: ");
        scanf("%f",&ini);
        final=ini*0.393701;
        while(final>=12)
        {
            ft=ft+1;
            final=final-12;
        }
        printf("\nThe length in feet and inches is %dft and %dinches",ft,(int)final);
        fprintf(fp,"\n%.3f cm = %d ft and %d inches",ini,ft,(int)final);
        fclose(fp);
        break;

        case 8:
        printf("\n\nEnter the length in FEET: ");
        scanf("%d",&ft);
        printf("\nEnter the length in INCHES: ");
        scanf("%f",&ini);
        ini=ini+(ft*12);
        final=ini/0.393701;
        printf("\nThe length in CENTIMETER is %.4f cm",final);
        fprintf(fp,"\n%d ft and %.3f inches = %.3f cm",ft,ini,final);
        fclose(fp);
        break;

        default:
        printf("\nINVALID CHOICE: ");
        break;

    }
}

void temperature(int cho)
{
    FILE *fp=fopen("cal.txt","a");
    fprintf(fp,"\n\nTemperature Conversion:\n");
    double ini,final;
    switch(cho)
    {
        case 1:
        printf("\n\nEnter the temperature in CELSIUS: ");
        scanf("%lf",&ini);
        final=(ini*(9/5))+32;
        printf("\nThe temperature in FAHRENHEIT is %.2lf",final);
        fprintf(fp,"\n%.2lf *C = %.2lf *F",ini,final);
        fclose(fp);
        break;

        case 2:
        printf("\n\nEnter the temperatue in FAHRENHEIT: ");
        scanf("%lf",&ini);
        final=(ini-32)*(0.55555555555555555555555555555556);
        printf("\nThe temperature in CELSIUS is %.2lf",final);
        fprintf(fp,"\n%.2lf *F = %.2lf *C",ini,final);
        fclose(fp);
        break;

        case 3:
        printf("\n\nEnter the temperature in CELSIUS: ");
        scanf("%lf",&ini);
        final=ini+273.15;
        printf("\nThe temperature in KELVIN is %.2lf",final);
        fprintf(fp,"\n%.2lf *C = %.2lf *K",ini,final);
        fclose(fp);
        break;

        case 4:
        printf("\n\nEnter the temperature in KELVIN: ");
        scanf("%lf",&ini);
        final=ini-273.15;
        printf("\nThe temperature in CELSIUS is %.2lf",final);
        fprintf(fp,"\n%.2lf *K = %.2lf *C",ini,final);
        fclose(fp);
        break;

        case 5:
        printf("\n\nEnter the temperature in FAHRENHEIT: ");
        scanf("%lf",&ini);
        final=(ini-32)*(0.55555555555555555555555555555556)+273.15;
        printf("\nThe temperature in KELVIN is %.2lf",final);
        fprintf(fp,"\n%.2lf *F = %.2lf *K",ini,final);
        fclose(fp);
        break;

        case 6:
        printf("\n\nEnter the temperature in KELVIN: ");
        scanf("%lf",&ini);
        final=(ini-273.15)*9/5+32;
        printf("\nThe temperature in FAHRENHEIT is %.2lf",final);
        fprintf(fp,"\n%.2lf *K = %.2lf *F",ini,final);
        fclose(fp);
        break;

        default:
        printf("\nINVALID CHOICE: ");
        break;

    }
}

void time(int cho)
{
    FILE *fp=fopen("cal.txt","a");
    fprintf(fp,"\n\nTime Conversion:\n");
    float ini,final;
    switch(cho)
    {
        case 1:
        printf("\n\nEnter the time in MINUTES: ");
        scanf("%f",&ini);
        final=ini*60;
        printf("\nThe time in SECONDS is %.2f secs",final);
        fprintf(fp,"\n%.2f mins = %.2f secs",ini,final);
        fclose(fp);
        break;

        case 2:
        printf("\n\nEnter the time in SECONDS: ");
        scanf("%f",&ini);
        final=ini/60;
        printf("\nThe time in MINUTES is %.2f mins",final);
        fprintf(fp,"\n%.2f secs = %.2f mins",ini,final);
        fclose(fp);
        break;

        case 3:
        printf("\n\nEnter the time in HOURS: ");
        scanf("%f",&ini);
        final=ini*(60*60);
        printf("\nThe time in SECONDS is %.2f secs",final);
        fprintf(fp,"\n%.2f hrs = %.2f secs",ini,final);
        fclose(fp);
        break;

        case 4:
        printf("\n\nEnter the time in SECONDS: ");
        scanf("%f",&ini);
        final=ini/(60*60);
        printf("\nThe time in HOURS is %.5f hrs",final);
        fprintf(fp,"\n%.2f secs = %.3f hrs",ini,final);
        fclose(fp);
        break;

        case 5:
        printf("\n\nEnter the time in DAYS: ");
        scanf("%f",&ini);
        final=ini*86400;
        printf("\nThe time in SECONDS is %.2f secs",final);
        fprintf(fp,"\n%.2f days = %.2f secs",ini,final);
        fclose(fp);
        break;

        case 6:
        printf("\n\nEnter the time in DAYS: ");
        scanf("%f",&ini);
        final=ini*1440;
        printf("\nThe time in MINUTES is %.2f mins",final);
        fprintf(fp,"\n%.2f days = %.2f mins",ini,final);
        fclose(fp);
        break;
        
        case 7:
        printf("\n\nEnter the time in DAYS: ");
        scanf("%f",&ini);
        final=ini*24;
        printf("\nThe time in HOURS is %.3f hrs",final);
        fprintf(fp,"\n%.2f days = %.3f hrs",ini,final);
        fclose(fp);
        break;

        case 8:
        printf("\n\nEnter the time in MONTHS: ");
        scanf("%f",&ini);
        final=ini*2629800;
        printf("\nThe time in SECONDS is %.0f secs",final);
        fprintf(fp,"\n%.2f mths = %.2f secs",ini,final);
        fclose(fp);
        break;

        case 9:
        printf("\n\nEnter the time in MONTHS: ");
        scanf("%f",&ini);
        final=ini*43800;
        printf("\nThe time in MINUTES is %.2f mins",final);
        fprintf(fp,"\n%.2f mths = %.2f mins",ini,final);
        fclose(fp);
        break;

        case 10:
        printf("\n\nEnter the time in YEARS: ");
        scanf("%f",&ini);
        final=ini*525600;
        printf("\nThe time in MINUTES is %.2f mins",final);
        fprintf(fp,"\n%.2f yrs = %.2f mins",ini,final);
        fclose(fp);
        break;

        default:
        printf("\nINVALID CHOICE: ");
        break;

    }    
}

void trigo(int choice2)
{
    FILE *fp=fopen("cal.txt","a");
    fprintf(fp,"\n\nTrigo Function:\n");
    double ini,final;
    switch(choice2)
    {
        case 1:
        printf("\n\nEnter the value of x(degrees) in RADIANS: ");
        scanf("%lf",&ini);
        final=sin(ini);
        printf("The sin value of %.0lf is %.2lf",ini,final);
        fprintf(fp,"\nsin(%.0lf) = %.2lf",ini,final);
        fclose(fp);
        break;

        case 2:
        printf("\n\nEnter the value of x(degrees) in RADIANS: ");
        scanf("%lf",&ini);
        final=cos(ini);
        printf("The cos value of %.0lf is %.2lf",ini,final);
        fprintf(fp,"\ncos(%.0lf) = %.2lf",ini,final);
        fclose(fp);
        break;

        case 3:
        printf("\n\nEnter the value of x(degrees) in RADIANS: ");
        scanf("%lf",&ini);
        final=tan(ini);
        printf("The tan value of %.0lf is %.2lf",ini,final);
        fprintf(fp,"\ntan(%.0lf) = %.2lf",ini,final);
        fclose(fp);
        break;

        case 4:
        printf("\n\nEnter the value of x(degrees) in RADIANS: ");
        scanf("%lf",&ini);
        final=1/(cos(ini));
        printf("The sec value of %.0lf is %.2lf",ini,final);
        fprintf(fp,"\nsec(%.0lf) = %.2lf",ini,final);
        fclose(fp);
        break;

        case 5:
        printf("\n\nEnter the value of x(degrees) in RADIANS: ");
        scanf("%lf",&ini);
        final=1/(sin(ini));
        printf("The cosec value of %.0lf is %.2lf",ini,final);
        fprintf(fp,"\ncosec(%.0lf) = %.2lf",ini,final);
        fclose(fp);
        break;

        case 6:
        printf("\n\nEnter the value of x(degrees) in RADIANS: ");
        scanf("%lf",&ini);
        final=1/(tan(ini));
        printf("The cot value of %.0lf is %.2lf",ini,final);
        fprintf(fp,"\ncot(%.0lf) = %.2lf",ini,final);
        fclose(fp);
        break;

        default:
        printf("\nINVALID CHOICE");
        break;

    }
}