#include <stdio.h>


int main()
{
    int input;
    char sen[100];
    char answer[100];

    //integet input and output 
    printf("Enter a integer\n");
    //gets(input);
    printf("Your input is %d\n", input);

    //string input and output
    printf("Enter a sentence: ");
    scanf(" %[^\n]%* c \n", &sen);
    //gets(sen);

    // printf("this is a test print");
    printf("Your output sentence: => %s\n", sen);


    //a single word input and output
    printf("What's your name?\n");
    scanf("%s",&answer);            
    printf("Hello , %s", answer);


    return 0;
}
