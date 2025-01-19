#include <stdio.h>

int main()
{
    float celsius,fahrenheit,kelvin;
    printf("Enter the temperature in celsius\n");
    scanf("%f",&celsius);

    kelvin=celsius+273.00;
    printf("Temperature in kelvin %.4f\n",kelvin);

    fahrenheit=(9*celsius/5)+32;
    printf("Temperature in farenheit %.4f", fahrenheit);

    return 0;
}   