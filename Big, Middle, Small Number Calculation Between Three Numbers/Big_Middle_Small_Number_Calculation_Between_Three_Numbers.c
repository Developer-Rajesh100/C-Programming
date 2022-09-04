#include <stdio.h>

int main()
{
    int first, second, third;

    printf("Enter The First Number: ");
    scanf("%d", &first);

    printf("Enter The Second Number: ");
    scanf("%d", &second);

    printf("Enter The Third Number: ");
    scanf("%d", &third);

    if (first > second)
    {
        if (first > third)
        {
            if (second > third)

                printf(" %d is Big. \n %d is Middle. \n %d is Small.", first, second, third);

            else
                printf("\t %d is Big. \n %d is Middle. \n %d is Small.", first, second, third);
        }
        else
            printf("\t %d is Big. \n %d is Middle. \n %d is Small.", third, first, second);
    }

    else
    {
        if (second > third)
        {
            if (first > third)

                printf(" %d is Big. \n %d is Middle. \n %d is Small.", second, first, third);

            else
                printf("\t %d is Big. \n %d is Middle. \n %d is Small.", second, first, third);
        }
        else
            printf("\t %d is Big. \n %d is Middle. \n %d is Small.", third, second, first);
    }

    return 0;
}