#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a;
    printf("Enter any number ");
    scanf("%d",&a);
    //One lined loop
    (a%2==0)?printf("a is even"):printf("a is odd");
}