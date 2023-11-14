//SWARUP LAMSAL, 222041
#include<stdio.h>
void main()
{
    int n,sum=0;
    float avg;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int num[n];
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the element number %d: ",i+1);
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    avg=(float)sum/n;
    printf("\n\nThe sum of all elements is %d",sum);
    printf("\nThe average of all elements is %f",avg);
}