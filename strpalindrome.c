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
    int x;
    for(i=0;i<len;i++)
    {
        strr[i]=str[len-1-i];

    }
    printf("The reverse string is %s\n",strr);
    int flag=0;
    for(i=0;i<len;i++)
    {
        int m=str[i];
        int n=strr[i];
        if(m!=n)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("The given string is palindrome");
    }
    else
    printf("The given string is not palindrome");
}