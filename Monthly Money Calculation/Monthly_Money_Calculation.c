#include <stdio.h>

int main()
{
    int income, food, rent, others, total_expenses, balance, save, saving,
        remaining_balance;

    printf("Enter Your Monthly Income: ");
    scanf("%d", &income);

    printf("Enter Your Food Cost: ");
    scanf("%d", &food);

    printf("Enter Your Rent Cost: ");
    scanf("%d", &rent);

    printf("Enter Your Others Cost: ");
    scanf("%d", &others);

    total_expenses = food + rent + others;
    balance = income - total_expenses;

    printf("\nTotal Expenses: %d", total_expenses);
    printf("\nBalance: %d", balance);

    printf("\n\nSave (Percentage): ");
    scanf("%d", &save);

    saving = balance / 100 * save;
    remaining_balance = balance - saving;

    printf("\nSaving: %d", saving);
    printf("\nRemaining Balance: %d", remaining_balance);

    return 0;
}