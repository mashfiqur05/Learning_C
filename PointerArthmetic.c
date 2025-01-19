#include <stdio.h>

int main()
{
    // int a = 24;
    // int *ptra = &a;
    // printf("%d\n", ptra);
    // ptra++;
    // printf("%d\n", ptra);
    // printf("%d\n", ptra+2);

    int arr[] = {1, 2, 3, 4, 5, 6};
    int *arrptr = arr;

    printf("Adress of first element is %d\n", &arr[0]);
    printf("Adress of second element is %d\n", &arr[1]);
    printf("Adress of second element is %d\n", arr + 1);

    // arr++ // this line will throw an error
    // arrptr++ // this is a valid line

    printf("value of first element %d\n", arr[0]);
    printf("Value at Adress of first element is %d\n", *&(arr[0]));
    printf("Value at Adress of second element is %d\n", *(&arr[1]));
    printf("Value at Adress of second element is %d\n", *(arr + 1));

    return 0;
}