#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: \n");
    scanf("%d\n, %d", &a, &b);

    printf("Output of BItwise AND is %d\n", a & b);

    printf("Output of BItwise OR is %d\n", a | b);

    printf("Output of BItwise XOR is %d\n", a ^ b);

    return 0;
}