#include <stdio.h>

int main()
{
    int first, second, third;

    printf("Enter The First Number: ");
    scanf("%d", &first);

    printf("Enter The Second Number: ");
    scanf("%d", &second);

    printf("Enter The Third Number: ");
    scanf("%d", &third);

    if (first > second)
    {
        if (first > third)
        {
            printf("First Number is Big.");
        }
        else
        {
            printf("Third Number is Big.");
        }
    }

    if (second > first)
    {
        if (second > third)
        {
            printf("Second Number is Big.");
        }
        else
        {
            printf("Third Number is Big.");
        }
    }

    return 0;
}