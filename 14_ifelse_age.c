#include<stdio.h>
int main()
{
    int age;
    printf("enter age:&age");
    scanf("%d",&age);
    if(age>18)
    {
        printf("adult\n");
        printf("they can drive \n");
    }
    else
    {
        printf("not adult if \n");
    }
    return 0;
}