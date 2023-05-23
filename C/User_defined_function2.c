#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int area(int a);
int main()
{
    int l,a;
    printf("Enter the length of the square: ");
    scanf("%d",&l);
    a=area(l);
    printf("%d",a);
    return 0;
}
int area(int a)
{
    return a*a;
}