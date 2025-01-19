//check a year which is Leap Year or not.           

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year :\n");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("The year you have entered is a Leap Year");
    }
    else if (year % 100 == 0)
    {
        printf("The year you have entered is not a Leap Year");
    }
    else if (year % 4 == 0)
    {
        printf("The year you have entered is a Leap Year");
    }
    else
    {
        printf("The year you have entered is not a Leap Year");
    }

    return 0;
}