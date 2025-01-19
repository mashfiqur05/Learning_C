#include <stdio.h>

int main()
{
    int i,j,num;
    printf("Enter a number :\n");
    scanf("%d", &num);

    for ( j = 1; j <= num; j++)
    {
    for ( i = 1; i <=  num; i++)
    {
        printf("* ");
    }
    printf("\n");
    }

    return 0;
}