#include <stdio.h>

int main()
{
    double x = 13.3829282289282872892;
    float y = 15.3738789378928723873;

    printf("X = %.25lf\n", x);
    printf("Y = %.25f\n", y);   /// Doiuble is more precise than float

    return 0;
}