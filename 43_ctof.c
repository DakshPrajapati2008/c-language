#include<stdio.h>
float convert_temp (float celsiuus);
int main()
{
    float far = convert_temp(64);
    printf("far : %f",far);
    return 0;
}
float convert_temp (float celsiuus)
{
    float far = celsiuus * (9 / 5) + 32;
    return far;
}