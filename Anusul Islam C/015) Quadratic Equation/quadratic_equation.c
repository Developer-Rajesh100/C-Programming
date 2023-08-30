// Wrong Programming
#include <stdio.h>

int main(void)
{

    float a, b, c, d, x1, x2;

    printf("ENTER A B C: ");
    scanf("%f %f %f", &a, &b, &c);

    d = sqrt(b * b - 4 * a * c);

    x1 = (-b + d) / (2 * a);
    x2 = (-b - d) / (2 * a);

    printf("x1 = %f", x1);
    printf("\nx2 = %f", x2);

    return 0;
}