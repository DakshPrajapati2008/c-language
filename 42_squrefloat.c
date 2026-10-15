#include<stdio.h>
#include<math.h>
void calculate_price(float value);
int main()
{
     float value = 100.0;
    calculate_price(value);
    printf("value is :%f\n",value);
    int n=4;
    printf("%d",pow(n,2));
    return 0;
}
void calculate_price(float value)
{
    value = value + (0.18 * value);
    printf("final price is :%f\n",value);
}

