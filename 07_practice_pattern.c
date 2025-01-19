/*
 *  *  *  *  *
 *           *
 *           *
 *           *
 *  *  *  *  *
*/

#include <stdio.h>

int main()
{
    int i, j, num;

    printf("Enter a number :\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (i == 1 || i == num || j == 1 || j == num)
                printf(" * ");      //by modyfing space you can make the rectangular or square smaller and bigger

            else
                printf("   ");      
        }
        printf("\n");
    }

    return 0;
}