//SWARUP LAMSAL, 222041
#include<stdio.h>
void main()
{
    int n,i,j,m;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            m=j*i;
            printf("%d\t",m);
        }
        printf("\n");
    }
}