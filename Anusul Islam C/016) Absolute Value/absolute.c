#include <stdio.h>

int main(void)
{

    int result, value;

    printf("ENTER VALUE: ");
    scanf("%d", &value);

    result = abs(value);

    printf("THE ABSOLUTE VALUE IS: %d", result);

    return 0;
}