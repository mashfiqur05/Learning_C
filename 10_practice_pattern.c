/*
 1
 2  3
 4  5  6
 7  8  9  10
 11  12  13  14  15
*/

#include <stdio.h>

int main()
{
    int i, j, k = 1, num;

    printf("Enter a number :\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {

            printf(" %d ", k++);
        }
        printf("\n");
    }

    return 0;
}