#include<stdio.h>
//declaration/prototype
void print_hello();
void print_by();
int main()
{
    print_hello();//function call
    print_by();
    return 0;
}
//function definition
void print_hello()
{
    printf("hello!\n");
}
void print_by()
{
    printf("by:\n");
}