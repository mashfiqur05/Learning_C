#include <stdio.h>

int main()
{

    int sum = 0, rem = 0, num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("%d", sum);
    return 0;
}
