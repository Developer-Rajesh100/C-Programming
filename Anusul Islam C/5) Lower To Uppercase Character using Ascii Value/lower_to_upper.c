#include <stdio.h>

int main()
{
    char lower;

    printf("Enter a Lowercase Character : ");
    scanf("%c", &lower);

    printf("The Uppercase Character is : %c", lower - 32);

    return 0;
}