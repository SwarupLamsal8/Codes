#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int sum(int a, int b);

int main()
{
    int c;
    c=sum(2,4);
    printf("%d",c);
    return 0;
}

int sum(int a,int b)
{
    int r=a+b;
    return r;
}
