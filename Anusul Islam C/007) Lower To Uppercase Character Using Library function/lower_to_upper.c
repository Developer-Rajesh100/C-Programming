#include <stdio.h>

int main(void)
{

    char lower;

    printf("Enter Any Lowercase Character : ");
    scanf("%c", &lower);

    printf("The Uppercase character is : %c", toupper(lower));

    return 0;
}