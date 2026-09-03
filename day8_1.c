//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("It is an uppercase alphabet.");
    }
    else if (islower(ch))
    {
        printf("It is a lowercase alphabet.");
    }
    else if (isdigit(ch))
    {
        printf("It is a digit.");
    }
    else
    {
        printf("It is a special character.");
    }

    return 0;
}