#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d eh o maior\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d eh o maior\n", b);
    }
    else if (c > b && c > a)

        printf("%d eh o maior\n", c);

    return 0;
}