#include<stdio.h>
int search(char*,char);
int main()
{
    char str[100],ch;
    int pos;
    printf("Enter any String : ");
    gets(str);
    printf("Enter any character for search in String : ");
    scanf("%c",&ch);
    pos=search(str,ch);
    if(pos==1)
    {
        printf("Character found in string ");
    }
    else
    {
        printf("Character not found in string ");
    }
    return 0;
}
int search(char *ptr,char c)
{
    int p=-1;
    do
    {
        if(c==*ptr)
        {
            p=1;
            break;
        }
        ptr++;
    }
    while(*ptr!='\0');
    return p;
}
