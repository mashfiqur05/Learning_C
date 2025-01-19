#include <stdio.h>

int main()
{
    int num, index = 1;
    printf("Enter a num\n");
    scanf("%d", &num);
    printf("this is the number %d\n", num);

    do
    {
        printf("%d\n", index);
        index = index + 1;
    } while (num > index);

    return 0;
}
