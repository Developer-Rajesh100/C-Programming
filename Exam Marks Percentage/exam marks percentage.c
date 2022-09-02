#include <stdio.h>

int main()
{
    float mark, total, a = 100;
    double percentage;

    printf("Enter Total Marks: ");
    scanf("%d", &total);

    printf("Enter Your Marks: ");
    scanf("%d", &mark);

    percentage = mark * a / total;

    printf("Your Percentage is: %lf", percentage);

    return 0;
}