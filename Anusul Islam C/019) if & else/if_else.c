#include <stdio.h>

int main(void)
{

    int number;

    printf("ENTER A NUMBER: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d THIS IS ODD NUMBER", number);
    }

    else
    {
        printf("%d THIS IS EVEN NUMBER", number);
    }

    return 0;
}