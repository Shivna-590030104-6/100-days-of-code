//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    float area, circumference, radius;
    const float PI = 3.14159;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = PI * radius * 2;
    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);
    return 0;
}

