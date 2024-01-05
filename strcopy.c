#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    printf("Enter the string");
    scanf("%[^\n]s",str);
    int i,len=0;
    for(int i=0;;i++)
    {
        if(str[i]=='\0')
        break;
        else
        len++;
    }
    printf("Lenght of the string=%d\n",len);
    char strr[len];
    for(i=0;i<len;i++)
    {
        strr[i]=str[i];
    }
    printf("Copied string is %s",strr);
}