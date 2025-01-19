/*
make a conversion table
km to m
kg to lb
km to miles
cm to inch
inch to foot
inch to meter
*/

#include <stdio.h>

int main()
{
    int input;
    float KmtoM = 1000;
    float Kgtolb = 2.20462;
    float kmtoMile = 0.621371;
    float CmtoInch = 0.393701;
    float InchtoFoot = 0.0833333;
    float InchtoMeter = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character which you want to convert\n    1. Km to Meter\n    2. Kg to lb\n    3. Km to Miles\n    4. Cm to Inch\n    5. Inch to Foot\n    6. Inch to Meter\n    7. Quite this programme\n");

        scanf(" %d", &input);

        switch (input)
        {

        case 1:
            printf("Enter the value in first terms\n");
            scanf("%f", &first);
            second = first * KmtoM;
            printf("%.3f Km is equal to %.3f meter\n", first, second);
            break;

        case 2:
            printf("Enter the value in first terms\n");
            scanf("%f", &first);
            second = first * Kgtolb;
            printf("%.3f Kg is equal to %.3f Pound\n", first, second);
            break;

        case 3:
            printf("Enter the value in first terms\n");
            scanf("%f", &first);
            second = first * kmtoMile;
            printf("%.3f Km is equal to %.3f Mile\n", first, second);
            break;

        case 4:
            printf("Enter the value in first terms\n");
            scanf("%f", &first);
            second = first * CmtoInch;
            printf("%.3f Cm is equal to %.3f Inch\n", first, second);
            break;

        case 5:
            printf("Enter the value in first terms\n");
            scanf("%f", &first);
            second = first * InchtoFoot;
            printf("%.3f Inch is equal to %.3f Foot\n", first, second);
            break;

        case 6:
            printf("Enter the value in first terms\n");
            scanf("%f", &first);
            second = first * InchtoMeter;
            printf("%.3f Inch is equal to %.3f Meter\n", first, second);
            break;

        case 7:
            printf("Programme is Quiting...\n");
            goto end;
            break;

        default:
            printf("Default");
            break;
        }
    }
end:

    return 0;
}