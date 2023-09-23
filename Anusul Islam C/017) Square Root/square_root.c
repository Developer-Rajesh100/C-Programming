// Wrong Programm

/*
#include <stdio.h>
#include <math.h>

int main(void)
{

    float result, value;

    printf("ENTER VALUE: ");
    scanf("%f", &value);

    result = sqrt(value);

    printf("THE SQUARE VALUE IS: %.4lf", result);

    return 0;
}
*/

#include <stdio.h>
#include <math.h>

int main()
{

    int a = 45;
    int b = 16;
    double c = 1443.76;

    printf("The square root of %d: %.4lf\n", a, sqrt(a));
    printf("The square root of %d: %.4lf\n", b, sqrt(b));
    printf("The square root of %.4lf: %.4lf\n", c, sqrt(c));

    return 0;
}