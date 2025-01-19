// Print a Diamond shape with star

#include <stdio.h>

int main()
{
    int i, j, k, num;
    printf("Enter a num: \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j < num; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = num ; i--;)
    {
        for (int j = i; j < num; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
        i <= 0;
    }
    
    return 0;
}