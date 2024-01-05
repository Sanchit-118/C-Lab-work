#include<stdio.h>
void main()
{
    int a[n],n,sum=0;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter array elemens");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum=%d",sum);
}