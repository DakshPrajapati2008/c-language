#include<stdio.h>
int main()
{
    int n;
    printf("enter numer:");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("final factoril is %d",fact);
    return 0;
}