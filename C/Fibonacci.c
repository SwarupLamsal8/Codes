#include<stdio.h>

int main()
{
    int n,i,a=0,b=1,c;
    printf("Enter the number of terms in fibonacci series which is to be printed: ");
    scanf("%d",&n);
    printf("\nThe fibonacci series starting from 1 is:\n\n");
    for(i=1;i<=n;i++)
    {
      printf("%d\t",b);
      c=a+b;
      a=b;
      b=c;
    }
    printf("\n\n\n");
    return 0;
}