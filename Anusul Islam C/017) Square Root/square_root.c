// Wrong Programm
#include <stdio.h>

int main(void)
{

    float result, value;

    printf("ENTER VALUE: ");
    scanf("%f", &value);

    result = sqrt(value);

    printf("THE SQUARE VALUE IS: %.2f", result);

    return 0;
}