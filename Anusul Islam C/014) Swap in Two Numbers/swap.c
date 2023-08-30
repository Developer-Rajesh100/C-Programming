#include <stdio.h>

int main(void)
{

    int num1, num2, temp;

    printf("Enter The First Number: ");
    scanf("%d", &num1);

    printf("Enter The Second Number: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("THE FIRST NUMBER IS: %d", num1);
    printf("\nTHE SECOND NUMBER IS: %d", num2);

    return 0;
}