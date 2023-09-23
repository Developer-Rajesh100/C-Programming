#include <stdio.h>

void calculator()
{
    char choice;
    int num1, num2;

    printf("Press '+' For Plus\n");
    printf("Press '-' For Minus\n");
    printf("Press '*' For Multiply\n");
    printf("Press '/' For Multiply\n");

    printf("Enter Your Choice : ");
    scanf("%c", &choice);

    switch (choice)
    {
        //+++

    case '-':
    {
        printf("Enter First Number : ");
        scanf("%d", &num1);
        printf("Enter Second Number : ");
        scanf("%d", &num2);
        printf("The Answer is : %d", num1 - num2);
        break;
    }

    case '*':
    {
        printf("Enter First Number : ");
        scanf("%d", &num1);
        printf("Enter Second Number : ");
        scanf("%d", &num2);
        printf("The Answer is : %d", num1 * num2);
        break;
    }

    case '/':
    {
        printf("Enter First Number : ");
        scanf("%d", &num1);
        printf("Enter Second Number : ");
        scanf("%d", &num2);
        printf("The Answer is : %d", num1 / num2);
        break;
    }

    default:
        printf("Error: ");
    }
}

int main()
{
    calculator();

    return 0;
}