//Swarup Lamsal, 222041
//Reversing string without using strrev.
#include<stdio.h>
void main()
{
    char a[10]="Swarup";
    printf("String in Reverse is:\n");
    for(int i=5;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}