#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
    int a,b,count=1;
    srand(time(0));
    a=rand()%100+1;
    printf("A random number between has been generated. The player must guess the number.\n");
    do
    {
        printf("\n\nGuess the number: ");
        scanf("%d",&b);
        if(b<a)
        {
            printf("\nThe number is higher.");
        }
        else if(b>a)
        {
            printf("\nThe number is lower.");
        }
        else
        {
            printf("\nCONGRATUATIONS! Your guess is %d and it is the correct guess. You guessed it in %d attempts.\n\n",b,count);
        }
        count++;
    }while(b!=a);
    return 0;
}