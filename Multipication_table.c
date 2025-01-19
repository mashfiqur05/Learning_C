#include <stdio.h>

// void sum(int num1, int num2){
// printf("%d --- %d \n",num1,num2);
//  return num1 + num2;}

// if i use void that means function will not return anything
// void main()
int main()
{
    int num;
    do
    {

        printf("Enter the number you want multipication of \n");
        scanf("%d/n", &num);

        printf("Multipication table of %d is \n", num);

        for (int i = 1; i <= 10; i++)
        {
            printf("%d*%d=%d\n", num, i, i * num);
        }
    } while (num <= 100);

    return 0;
}