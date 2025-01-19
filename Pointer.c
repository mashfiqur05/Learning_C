#include <stdio.h>

int main()
{
    int myage = 19; // Variable declaration
    printf("my age is %d\n", myage);
    printf("adress of myage is %x\n", &myage); // The memory adress of my age
    // if i use %x instead of %p this will give hexadecimal number

    // A pointer is a variable that stores the memory address of another variable as its value

    int *ptr = &myage;// pointer declaration
    int *ptr2 = NULL; 

    printf("adress of myage %p\n", *ptr);
    printf("Adress of pointer is %p\n", &ptr);
    printf("Adress of pointer 2 is %p\n", ptr2);
    printf("myage value is %d\n", *ptr);
    return 0;
}