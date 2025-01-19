#include <stdio.h>

int main()
{
    int age , marks;
    printf("Enter your age\n");
    scanf("%d", &age);

    printf("Enter your marks\n");
    scanf("%d", &marks);


    switch (age)
    {
    case 3:
        printf("the age is 3\n");
       
        
        break;

        case 13:
        printf("the age is 13\n");
        break;

            case 23:
        printf("the age is 23\n");
        break;

    default:
        printf("age is not 3,13 or 23\n");
        break;
    }

 if (marks>=33)
        {
            printf("Congratulation! You passed the exam");
        }

        else if (marks<33)
        {
            printf("Sorry!You didn't pass the exam");
        }

    return 0;
}
