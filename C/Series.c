//SWARUP LAMSAL, 222041
//SWARUP LAMSAL, 222041
#include<stdio.h>
#include<math.h>
void main()
{
    int i;
    float n,sum=1;
    printf("Enter the value of n: ");
    scanf("%f",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+pow(i,2)/pow(i,3);
    }
    printf("\n\nTHE SUM OF THE SERIES OF 1+3^2/3^3+5^2/5^3+...+n^2/n^3 IS %f",sum);
}