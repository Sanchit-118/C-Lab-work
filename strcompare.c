#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    printf("Enter the string 1");
    scanf("%s",str);
    char st[50];
    printf("Enter the string 2");
    scanf("%[^\n]s",st);
    int i,len=0;
    for(int i=0;;i++)
    {
        if(str[i]=='\0')
        break;
        else
        len++;
    }
    printf("Lenght of the string=%d\n",len);
    char strr[len],strrr[len];
    for(i=0;i<len;i++)
    {
        strr[i]=str[i];
        strrr[i]=st[i];
    }
    printf("first Copied string is %s",strr);
    printf("second Copied string is %s",strrr);
    int x;
    if(strr[i]==strrr[i])
    {
        printf("Both the strings are same");
    }
    else
    printf("Not same");
}