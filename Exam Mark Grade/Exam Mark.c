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
    if (number >= 80 && 90 > number)
    {
        printf("Your Grade is 'A+'");
    }
    if (number >= 60 && 80 > number)
    {
        printf("Your Grade is 'A'");
    }
    if (number >= 45 && 60 > number)
    {
        printf("Your Grade is 'B+'");
    }
    if (number >= 35 && 45 > number)
    {
        printf("Your Grade is 'B'");
    }
    if (number >= 25 && 35 > number)
    {
        printf("Your Grade is 'C'");
    }
    if (25 > number)
    {
        printf("You are Fail");
    }

    return 0;
}