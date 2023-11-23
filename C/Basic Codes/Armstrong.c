//SWARUP LAMSAL 222041 BCA
#include<stdio.h>

int main()
{
    int n,new=0,old,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    old=n;
    while(n>0)
    {
        rem=(n%10);
        new=(rem*rem*rem)+new;
        n=n/10;
    }
    if(old==new)
    {
        printf("%d is armstrong.",old);
    }
    else
    {
        printf("%d is not armstrong.",old);
    }
    return 0;
}