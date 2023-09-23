#include <stdio.h>

int main()
{
    int amount, quotient;

    printf("Enter an Amount : ");
    scanf("%d", &amount);

    if (amount < 0)
    {
        printf("Your Amount is Invalid, Please Enter Valid Amount");
    }

    // 2000 Notes
    quotient = amount / 2000;
    printf("2000 = %d \n", quotient);

    amount = amount % 2000;

    // 500 Notes
    quotient = amount / 500;
    printf("500 = %d \n", quotient);

    amount = amount % 500;

    // 200 Notes
    quotient = amount / 200;
    printf("200 = %d \n", quotient);

    amount = amount % 200;

    // 100 Notes
    quotient = amount / 100;
    printf("100 = %d \n", quotient);

    amount = amount % 100;

    // 50 Notes
    quotient = amount / 50;
    printf("50 = %d \n", quotient);

    amount = amount % 50;

    // 20 Notes
    quotient = amount / 20;
    printf("20 = %d \n", quotient);

    amount = amount % 20;

    // 10 Notes
    quotient = amount / 10;
    printf("10 = %d \n", quotient);

    amount = amount % 10;

    // 5 Notes
    quotient = amount / 5;
    printf("5 = %d \n", quotient);

    amount = amount % 5;

    // 2 Notes
    quotient = amount / 2;
    printf("2 = %d \n", quotient);

    amount = amount % 2;

    // 1 Notes
    quotient = amount / 1;
    printf("1 = %d \n", quotient);

    amount = amount % 1;

    return 0;
}
