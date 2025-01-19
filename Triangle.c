// Print a triangle with star

#include <stdio.h>

int main()
{
    int i, j, num;
    printf("Enter a num :\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    return 0;
}