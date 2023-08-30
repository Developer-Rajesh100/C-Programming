#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter Centigrade Temperature Value: ");
    scanf("%f", &c),

        f = (c * 1.8) + 32;

    printf("The Fahrenheit Temperature is: %.2f", f);

    return 0;
}