#include <stdio.h>

int main()
{
    int number;

    printf("Enter The Number: ");
    scanf("%d", &number);

    if (number >= 90)
    {
        printf("Your Grade is 'AA'");
    }
    else if (number > 80 && 89 > number)
    {
        printf("Your Grade is 'A+'");
    }
    else if (number > 60 && 79 > number)
    {
        printf("Your Grade is 'A'");
    }
    else if (number > 45 && 59 > number)
    {
        printf("Your Grade is 'B+'");
    }
    else if (number > 35 && 44 > number)
    {
        printf("Your Grade is 'B'");
    }
    else if (number > 25 && 34 > number)
    {
        printf("Your Grade is 'B'");
    }
    else if (25 > number)
    {
        printf("You are Fail");
    }

    return 0;
}