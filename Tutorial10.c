#include <stdio.h>

int main()
{
    int age;    
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("you have entered %d  as your age\n", age);
    if (age>=18)
    {
        printf("you can Vote!");
    }
    else if (age>=10)
    {
        printf("you are teenager. you can't vote!");
    }
     else if (age>=4,age<10)
    {
        printf("you are kid you cannot vote!");
    }
    else if (age<=3)
    {
        printf("you are baby you cannot vote!");
    } 
    else
    {
        printf("Sorry.You cannot Vote!");
    }   
    return 0;
}