#include <stdio.h>

int main()
{
    float f, c;

    printf("Enter Fahrenheit Temperature Value: ");
    scanf("%f", &f),

        c = (f - 32) / 1.8;

    printf("The Centigrade Temperature is: %.2f", c);

    return 0;
}