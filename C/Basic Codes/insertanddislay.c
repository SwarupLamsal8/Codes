//Swarup Lamsal, 222041
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\n");
    int num[n];
    for(int i=0;i<n;i++)//INPUT
    {
        printf("Enter element number %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)//OUTPUT
    {
        printf("Element %d: %d\n",i+1,num[i]);
    }
}