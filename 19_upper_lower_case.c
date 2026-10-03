#include<stdio.h>
int main()
{
    char ch;
    pringtf("enter character:");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z')
    {
        printf("upper case\n");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("lower case\n");
    }
    return 0;
}