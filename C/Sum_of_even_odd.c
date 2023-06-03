#include<stdio.h>

int main()
{
    int num,i=1,esum=0,osum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    do
    {
       if(i%2==0)
       {
        esum=esum+i;
       }
       else if(i%2==1)
       {
        osum=osum+i;
       }
       i++;    
    }while(i<=num);
    printf("\n\nThe sum of even numbers till %d is %d",num,esum);
    printf("\n\nThe sum of odd number till %d is %d",num,osum);
    return 0;
}