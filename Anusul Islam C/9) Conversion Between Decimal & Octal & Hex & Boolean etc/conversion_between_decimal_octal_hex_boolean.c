#include <stdio.h>

int main()
{

    int number;

    printf("Enter any Number : ");
    scanf("%c", &number);

    printf("\nThe Hex Format is : %x", number);
    printf("\nThe Octal Format is : %o", number);
    printf("\nThe Object Format is : %o", number);
    printf("\nThe Integer Format is : %i", number);

    return 0;
}