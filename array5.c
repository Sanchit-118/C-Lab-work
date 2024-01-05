#include<stdio.h>
#include"array6.c"
void display();
void main()
{
    display();
    extern int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}