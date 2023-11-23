#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int choice,a,b,sum,diff,prod;
    float c,d,divi;
    printf("\t\t\t\tMenu\n");
    printf("Choice 1:\tAdd\n");
    printf("Choice 2:\tSubstract\n");
    printf("Choice 3:\tMultiplication\n");
    printf("Choice 4:\tDivision\n\n");

    printf("Enter your choice for the calculation of two numbers:\t");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        printf("\nEnter your two numbers:\t");
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("\nWhen %d and %d are added the result is: %d\n\n",a,b,sum);
        break;

        case 2:
        printf("\nEnter your two numbers:\t");
        scanf("%d%d",&a,&b);
        diff=a-b;
        printf("\nWhen %d is substracted by %d the result is: %d\n\n",a,b,diff);
        break;

        case 3:
        printf("\nEnter your two numbers:\t");
        scanf("%d%d",&a,&b);
        prod=a*b;
        printf("\nWhen %d is multiplied by %d the result is : %d\n\n",a,b,prod);
        break;

        case 4:
        printf("\nEnter your two numbers:\t");
        scanf("%f%f",&c,&d);
        divi=c/d;
        printf("\nWhen %.2f is divided by %.2f the result is : %.2f\n\n",c,d,divi);
        break;

        default:
        printf("\n\nThe choice is invalid\n\n");


    }
    return 0;
}