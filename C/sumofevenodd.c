//SWARUP LAMSAL, 222041
#include<stdio.h>
void main()
{
    int n,i,esum=0,osum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            esum=esum+i;
        }
        else
        {
            osum=osum+i;
        }
    }
    printf("\nSum of even numbers upto %d is %d",n,esum);
    printf("\n\nSum of odd numbers upto %d is %d\n",n,osum);
}