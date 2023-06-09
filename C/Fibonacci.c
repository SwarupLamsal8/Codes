//SWARUP LAMSAL, 222041
#include<stdio.h>

void main()
{
    int n,i,a=0,b=1,c;
    printf("Write the number of terms in fibonacci series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}