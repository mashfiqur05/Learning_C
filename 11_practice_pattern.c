/*
     1
    12
   123
  1234
 12345
*/

#include <stdio.h>

int main()
{
    int i, j, num;
    printf("Enter a number :\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (int k = num; k >= i; k--)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d", j);        //By using printf("%d ", j); this you will get another pattern.
        }

        printf("\n");
    }

    return 0;
}