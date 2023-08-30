#include <stdio.h>

int main(void)
{

    char upper;

    printf("Enter Any Capital Character : ");
    scanf("%c", &upper);

    printf("The Lowercase Character is : %c", tolower(upper));

    return 0;
}