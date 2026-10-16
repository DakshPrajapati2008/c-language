#include <stdio.h>

int main()
{
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;

    int i = 5;
    int *iptr = &i;
    int **ipptr = &iptr;

    printf("price = %.2f\n", **pptr);
    printf("integer = %d\n", **ipptr);

    return 0;
}