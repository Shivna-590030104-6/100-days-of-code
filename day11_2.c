//Write a program to find profit or loss percentage given cost price and selling price
#include <stdio.h>
int main()
{
    float cost_price, selling_price, profit, loss, profit_percentage, selling_percentage;
    printf("Enter the cost price and selling price of the product: ");
    scanf("%f,%f", &cost_price, &selling_price);
    profit = (selling_price - cost_price);
    loss = (cost_price - selling_price);
    profit_percentage = (profit / cost_price) * 100;
    selling_percentage = (loss / cost_price) * 100;
    printf("Profit: %.2f\n", profit);
    printf("Loss: %.2f\n", loss);
    printf("Profit Percentage: %.2f%%\n", profit_percentage);
    printf("Loss Percentage: %.2f%%\n", selling_percentage);
    return 0;

}