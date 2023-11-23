#include<stdio.h>
#include<conio.h>
#include<math.h>
/*Code to check the income tax paid by an employee*/
int main()
{
    float income,tax=0;
    
    printf("Enter your income: ");
    scanf("%f",&income);

    if(income>250000 && income<=500000)
     {
        tax=(0.05)*(income-250000);
     }
    else if(income>500000 && income<=1000000)
     { 
        tax=(0.05*250000)+(0.2)*(income-500000);
     }
    else if (income>1000000)
     {
        tax=(0.3)*(income-1000000)+(0.05*250000)+(0.2*500000);
     }
    
    printf("The amount of income tax paid by the employee is: %f",tax);

    return 0;
}