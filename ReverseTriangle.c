// Print a reverse triangle with star

#include <stdio.h>

int main()
{
    int i, j, num;
    printf("Enter a num: \n");
    scanf("%d", &num);

    for (int i = num; i >=1; i--)
    {
        for (int j = i; j < num; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {

            printf(" *");
        }

        printf("\n");
        
    }
   /* for ( i = num; i >=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    
*/
    return 0;
}