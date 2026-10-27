//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }
    if (original == sum)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");
    return 0;
}