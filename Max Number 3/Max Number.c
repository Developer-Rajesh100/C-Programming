#include <stdio.h>

// Maximum Value Between Three Numbers
int main()
{
    int first_number, second_number, third_number;

    printf("Enter The First Number: ");
    scanf("%d", &first_number);

    printf("Enter The Second Number: ");
    scanf("%d", &second_number);

    printf("Enter The Third Number: ");
    scanf("%d", &third_number);

    if (first_number > second_number && first_number > third_number)
    {
        printf("First Number is Big.");
    }

    else if (second_number > first_number && second_number > third_number)
    {
        printf("Second Number is Big.");
    }

    else
        printf("Third Number is Big.");

    return 0;
}