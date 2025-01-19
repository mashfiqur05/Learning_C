#include <stdio.h>

int main()
{
    // You can set array size and add elements like this
    /*int marks[5];
    marks[0]=80;
    marks[1]=90;
    marks[2]=85;
    marks[3]=79;
    marks[4]=96;
    */

    int marks[] = {80, 90, 85, 79, 96};

    printf("The marks of student 5 is %d\n", marks[4]);
    // Outpt 96

    // change an array element

    marks[4] = 85;
    printf("The marks of student 5 is %d\n", marks[4]);
    // Now output is 85 instead 96

    // Loop Through an Array
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student %d is %d\n", i, marks[i]);
    }

    return 0;
}