#include <stdio.h>
int main()
{
    float side, area;
    printf("Enter a side of squre:");
    scanf("%f",&side);
    area=side*side;
    printf("area of squre =%.2f\n",area);
    return 0;
}