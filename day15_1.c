//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the number is negative
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.\n");
    else
    {
        for(i = 1; i <= n; ++i)
        {
            factorial *= i; // Calculate factorial
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}

