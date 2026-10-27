//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, swappedNum, tempNum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Store the original number for later use
    tempNum = num;
    
    // Get the last digit
    lastDigit = num % 10;
    
    // Get the first digit
    while (tempNum >= 10) {
        tempNum /= 10;
    }
    firstDigit = tempNum;
    
    // Remove the first and last digits from the original number
    num = num / 10; // Remove last digit
    num = num - (firstDigit * (int)pow(10, (int)log10(num) + 1)); // Remove first digit
    
    // Swap the first and last digits
    swappedNum = lastDigit * (int)pow(10, (int)log10(num) + 1) + num + firstDigit;
    
    printf("Number after swapping first and last digit: %d\n", swappedNum);
    
    return 0;
}