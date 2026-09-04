//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
int main()
{
    float a, b, c, root1, root2, discriminant;
    printf("Enter the coefficients a,b and c of the quadratic equation (ax^2 + bx +c):");
    scanf("%f" , &a, &b, &c);
    discriminant = (b*b - 4*a*c);
    if (discriminant > 0)
    {
      printf("Roots are real and different");
    }
    else if (discriminant == 0)
    {
        printf("Roots are real and same");
    }
        else 
        {
           printf("Roots are complex");
        }
        return 0;
    }
    


