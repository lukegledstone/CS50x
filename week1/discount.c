// A program to discount a price of an item by a certain percentage, as if there was a sale. 
#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
    float regular = get_float("Regular price: ");
    int percent_off = get_int("Percent off: ");
    float sale = discount(regular, percent_off);
    printf("Sale Price: %.2f\n", sale)
    // Print the regular price minus 15% (1.0 - 0.15) and return the 'sale price' to 2 decimal places.
}

float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
    // The value of the discount is local in scope to the function.
    // If we don't 'RETURN' the discount, then the variable is not 
    // accessable from outside the function.
    // Therefore, we must RETURN the discount so that it can be 
    // assigned to a variable where the function is called.
}