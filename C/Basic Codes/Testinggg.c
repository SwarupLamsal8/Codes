#include<stdio.h>

void conv(int choice2);
void curr(int cho);
void mass(int cho);
void length(int cho);
void temperature(int cho);
void time(int cho);
int main()
{
    int choice2;
    printf("\n\n\t\t\t\t*CONVERSION MENU*\n");
    printf("1- CURRENCY\n");
    printf("2- MASS\n");
    printf("3- LENGTH\n");
    printf("4- TEMPERATURE\n");
    printf("5- TIME\n");
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
        printf("\nINVALID CHOICE: ");
        break;
    }
}

//FOR MASS CONVERSION
void mass(int cho)
{
    float ini,final;
    switch(cho)
    {
        case 1:
        printf("\n\nEnter the mass in KILOGRAM: ");
        scanf("%f",&ini);
        final=ini*1000;
        printf("\nThe mass in GRAM is %.3f gm",final);
        break;

        case 2:
        printf("\n\nEnter the mass in GRAM: ");
        scanf("%f",&ini);
        final=ini/1000;
        printf("\nThe mass in KILOGRAM is %.4f kg",final);
        break;

        case 3:
        printf("\n\nEnter the mass in KILOGRAM: ");
        scanf("%f",&ini);
        final=ini*2.20462;
        printf("\nThe mass in POUNDS(lbs) is %.4f lbs",final);
        break;

        case 4:
        printf("\n\nEnter the mass in POUNDS(lbs): ");
        scanf("%f",&ini);
        final=ini/2.20462;
        printf("\nThe mass in KILOGRAM is %.4f kg",final);
        break;

        case 5:
        printf("\n\nEnter the mass in KILOGRAM: ");
        scanf("%f",&ini);
        final=ini/1000;
        printf("\nThe mass in TONNE(STANDARD) is %.4f tonne",final);
        break;

        case 6:
        printf("\n\nEnter the mass in TONNE(STANDARD): ");
        scanf("%f",&ini);
        final=ini*1000;
        printf("\nThe mass in KILOGRAM is %.4f kg",final);
        break;


        case 7:
        printf("\n\nEnter the mass in KILOGRAM: ");
        scanf("%f",&ini);
        final=ini/907.185;
        printf("\nThe mass in TONNE(US) is %.4f tonne",final);
        break;

        case 8:
        printf("\n\nEnter the mass in TONNE(US): ");
        scanf("%f",&ini);
        final=ini*907.185;
        printf("\nThe mass in KILOGRAM is %.4f kg",final);
        break;

        case 9:
        printf("\n\nEnter the mass in GRAM: ");
        scanf("%f",&ini);
        final=ini/28.3495;
        printf("\nThe mass in OUNCE is %.4f oz",final);
        break;

        case 10:
        printf("\n\nEnter the mass in OUNCE: ");
        scanf("%f",&ini);
        final=ini*28.3495;
        printf("\nThe mass in GRAM is %.3f gm",final);
        break;

        default:
        printf("\nINVALID CHOICE: ");
        break;

    }
}

//FOR LENGTH CONVERSION
void length(int cho)
{
    float ini,final;
    int ft=0;
    switch(cho)
    {
        case 1:
        printf("\n\nEnter the length in METER: ");
        scanf("%f",&ini);
        final=ini*100;
        printf("\nThe length in CENTIMETER is %.4f cm",final);
        break;

        case 2:
        printf("\n\nEnter the length in CENTIMETER: ");
        scanf("%f",&ini);
        final=ini/100;
        printf("\nThe length in METER is %.4f m",final);
        break;

        case 3:
        printf("\n\nEnter the length in METER: ");
        scanf("%f",&ini);
        final=ini/1000;
        printf("\nThe length in KILOMETER is %.4f km",final);
        break;

        case 4:
        printf("\n\nEnter the length in KILOMETER: ");
        scanf("%f",&ini);
        final=ini*1000;
        printf("\nThe length in METER is %.4f m",final);
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
        break;

        case 6:
        printf("\n\nEnter the length in FEET: ");
        scanf("%d",&ft);
        printf("\nEnter the length in INCHES: ");
        scanf("%f",&ini);
        ini=ini+(ft*12);
        final=ini/39.3701;
        printf("\nThe length in METER is %.4f m",final);
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
        break;

        case 8:
        printf("\n\nEnter the length in FEET: ");
        scanf("%d",&ft);
        printf("\nEnter the length in INCHES: ");
        scanf("%f",&ini);
        ini=ini+(ft*12);
        final=ini/0.393701;
        printf("\nThe length in CENTIMETER is %.4f cm",final);
        break;

        default:
        printf("\nINVALID CHOICE: ");
        break;

    }
}

void temperature(int cho)
{
    double ini,final;
    switch(cho)
    {
        case 1:
        printf("\n\nEnter the temperature in CELSIUS: ");
        scanf("%lf",&ini);
        final=(ini*(9/5))+32;
        printf("\nThe temperature in FAHRENHEIT is %.2lf",final);
        break;

        case 2:
        printf("\n\nEnter the temperatue in FAHRENHEIT: ");
        scanf("%lf",&ini);
        final=(ini-32)*(0.55555555555555555555555555555556);
        printf("\nThe temperature in CELSIUS is %.2lf",final);
        break;

        case 3:
        printf("\n\nEnter the temperature in CELSIUS: ");
        scanf("%lf",&ini);
        final=ini+273.15;
        printf("\nThe temperature in KELVIN is %.2lf",final);
        break;

        case 4:
        printf("\n\nEnter the temperature in KELVIN: ");
        scanf("%lf",&ini);
        final=ini-273.15;
        printf("\nThe temperature in CELSIUS is %.2lf",final);
        break;

        case 5:
        printf("\n\nEnter the temperature in FAHRENHEIT: ");
        scanf("%lf",&ini);
        final=(ini-32)*(0.55555555555555555555555555555556)+273.15;
        printf("\nThe temperature in KELVIN is %.2lf",final);
        break;

        case 6:
        printf("\n\nEnter the temperature in KELVIN: ");
        scanf("%lf",&ini);
        final=(ini-273.15)*9/5+32;
        printf("\nThe temperature in FAHRENHEIT is %.2lf",final);
        break;

        default:
        printf("\nINVALID CHOICE: ");
        break;

    }
}

void time(int cho)
{
    float ini,final;
    switch(cho)
    {
        case 1:
        printf("\n\nEnter the time in MINUTES: ");
        scanf("%f",&ini);
        final=ini*60;
        printf("\nThe time in SECONDS is %.2f secs",final);
        break;

        case 2:
        printf("\n\nEnter the time in SECONDS: ");
        scanf("%f",&ini);
        final=ini/60;
        printf("\nThe time in MINUTES is %.2f mins",final);
        break;

        case 3:
        printf("\n\nEnter the time in HOURS: ");
        scanf("%f",&ini);
        final=ini*(60*60);
        printf("\nThe time in SECONDS is %.2f secs",final);
        break;

        case 4:
        printf("\n\nEnter the time in SECONDS: ");
        scanf("%f",&ini);
        final=ini/(60*60);
        printf("\nThe time in HOURS is %.5f hrs",final);
        break;

        case 5:
        printf("\n\nEnter the time in DAYS: ");
        scanf("%f",&ini);
        final=ini*86400;
        printf("\nThe time in SECONDS is %.2f secs",final);
        break;

        case 6:
        printf("\n\nEnter the time in DAYS: ");
        scanf("%f",&ini);
        final=ini*1440;
        printf("\nThe time in MINUTES is %.2f mins",final);
        break;
        
        case 7:
        printf("\n\nEnter the time in DAYS: ");
        scanf("%f",&ini);
        final=ini*24;
        printf("\nThe time in HOURS is %.2f hrs",final);
        break;

        case 8:
        printf("\n\nEnter the time in MONTHS: ");
        scanf("%f",&ini);
        final=ini*2629800;
        printf("\nThe time in SECONDS is %.0f secs",final);
        break;

        case 9:
        printf("\n\nEnter the time in MONTHS: ");
        scanf("%f",&ini);
        final=ini*43800;
        printf("\nThe time in MINUTES is %.2f mins",final);
        break;

        case 10:
        printf("\n\nEnter the time in YEARS: ");
        scanf("%f",&ini);
        final=ini*525600;
        printf("\nThe time in MINUTES is %.2f mins",final);
        break;

        default:
        printf("\nINVALID CHOICE: ");
        break;

    }    
}