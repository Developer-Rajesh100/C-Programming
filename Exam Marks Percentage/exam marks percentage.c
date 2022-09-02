#include <stdio.h>

int main()
{
    float mark, total, percentage, a = 100;

    printf("Enter Total Marks: ");
    scanf("%f", &total);

    printf("Enter Your Marks: ");
    scanf("%f", &mark);

    percentage = mark * a / total;

    printf("Your Percentage is: %f", percentage);

    return 0;
}