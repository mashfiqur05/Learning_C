#include <stdio.h>

int main()
{
    int i,j,num;
    printf("Enter a number :\n");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
    for ( j = 1; j <=  num; j++)
    {
        printf("%c ", j+64);    //64 is the ASCII vlaue of A.then continuously ABCDE...
    }
    printf("\n");
    }

    return 0;
}