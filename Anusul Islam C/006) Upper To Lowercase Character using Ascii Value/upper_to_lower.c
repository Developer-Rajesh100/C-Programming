#include <stdio.h>

int main(void)
{
    char upper;

    printf("Enter a Uppercase Character : ");
    scanf("%c", &upper);

    printf("The Lowercase Character is : %c", upper + 32);

    return 0;
}