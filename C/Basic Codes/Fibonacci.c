//SWARUP LAMSAL, 222041
#include<stdio.h>

void main()
{
    int n,a=0,b=1,c;
    printf("Write the limiting number for the fibonacci series: ");
    scanf("%d",&n);
    while(a<n)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}