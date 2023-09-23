#include <stdio.h>

int main()
{
    int num, index = 0;

    printf("Enter a Number : ");
    scanf("%d", &num);

    do
    {
        printf("%d, ", index++);
    } while (index <= num);

    return 0;
}
