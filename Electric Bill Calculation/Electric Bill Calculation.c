#include <stdio.h>

int main()
{
    int unit;
    float a;

    printf("Enter Your Electric Unit: ");
    scanf("%d", &unit);

    // <-1
    if (unit <= -1)
    {
        printf("Please Enter Valide Unit");
    }

    // 00 - 100
    else if (100 >= unit)
    {
        printf("Your Electric Bill is 150");
    }

    // 101 - 200
    else if (unit >= 101 || 200 >= unit)
    {
        a = 150 + (unit - 100) * 2.5;
        printf("Your Electric Bill is %f", a);
    }

    // 201 - 300
    else if (unit >= 201 || unit <= 300)
    {
        a = 150 + 100 * 2.5 + (unit - 200) * 3;
        printf("Your Electric Bill is %f", a);
    }

    // 301 ->
    else if (unit >= 301)
    {
        a = 150 + 100 * 2.5 + 100 * 3 + (unit - 200) * 4.5;
        printf("Your Electric Bill is %f", a);
    }

    return 0;
}