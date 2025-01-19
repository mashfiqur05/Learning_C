#include <stdio.h>

int main()
{
    int age, i;
   

    for ( i = 0; i < 10; i++)
    {
         printf("Enter your age\n ");
        scanf("%d", &age);
         
        if (age>18)
        { 
            printf("You are eligible for vote.\n");
          break;
        }
        if (age<18)
        {
             printf("You are not eligible for vote.\n");
            continue;
        }
            printf("You are eligible for vote.\n");
        
        }
        

        return 0;
    }
