#include<stdio.h>
int main()
{
    int age = 25;
    int *ptr = &age;
    int new_age = *ptr;
    printf("%d", new_age);
    return 0;
}