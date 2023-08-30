// Worng Programm
#include <stdio.h>

int main(void)
{

    float number, power, result;

    printf("ENTER THE NUMBER: ");
    scanf("%f", &number);

    printf("ENTER THE POWER: ");
    scanf("%f", &power);

    result = pow(number, power);

    printf("THE RESULT IS: %.2f", result);

    return 0;
}