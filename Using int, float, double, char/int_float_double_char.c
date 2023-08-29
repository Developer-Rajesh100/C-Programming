// Using int, float, double, char

#include <stdio.h>

int main()
{
    int i = 10;
    float f = 15.7;
    double d = 7.921544;
    char c = 'M';

    printf("i = %d, \n f = %f, \n d = %lf, \n c = %c", i, f, d, c);

    printf("\n\n\n i = %d, \n f = %.1f, \n d = %.4lf, \n c = %c", i, f, d, c);

    return 0;
}
