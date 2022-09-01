#include <stdio.h>

int main()
{
    int first_number, second_number, answer;
    printf("Enter The First Number: ");
    scanf("%d", &first_number);
    printf("Enter The Second Number: ");
    scanf("%d", &second_number);
    answer = first_number - second_number;
    printf("The Answer is %d", answer);
    return 0;
}