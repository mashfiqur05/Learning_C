/*
 *
 *  *
 *     *
 *        *
 *  *  *  *  *
*/

#include <stdio.h>

int main()
{
    int i, j, num;

    printf("Enter a number :\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            if (i == j || i == num || j == 1)

                printf(" * ");
            else
                printf("   ");
        }

        printf("\n");
    }

    return 0;
}