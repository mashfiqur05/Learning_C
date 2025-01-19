#include <stdio.h>

int main()
{
    int a = 10;
    int b = 3;

    double c = a / (double)b;  

    printf("%.4lf\n", b);
    printf("%d\n", b);
    printf("%.4lf\n", c);

    return 0;
}