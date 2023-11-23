//SWARUP LAMSAL 222041
#include<stdio.h>

int main()
{
    int n,sum=0,old;
    printf("Enter a number: ");
    scanf("%d",&n);
    old=n;
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("The sum of digits of %d is %d.",old,sum);
    return 0;
}