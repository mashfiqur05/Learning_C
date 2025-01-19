//Print a Pyramid with star

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a num: \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j < num; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {

            printf("*");
        }

        printf("\n");
    }

    return 0;
}