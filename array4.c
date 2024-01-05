#include<stdio.h>
void main()
{
    int arr[50],a,i,b;
    printf("Enter the value");
    scanf("%d",&a);
    int length=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<length;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("Largest element present in given array=%d\n");
    printf("Index=%d\n");
}