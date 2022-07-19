#include<stdio.h>
#include<cs50.h>

int main(void)
{
    // Prompt user for x:
    int x = get_float("x: ");

    // Prompt user for y:
    int y = get_float("y: "); 

    // Divide x by y
    float z = (float) x / (float) y;

    // Return z - use .Xf to return X decimal places when using float values. 
    printf("%.2f\n", z);

    // If using lots of significant places, if you only have 32 bits, you can get bit overflow when
    // referencing decimal places as well. In this scenario, the computer will perform it's own 
    // approximation of what the return value should be. 
    // This can also be known as 'floating point inprecision'.
    // This refers to the impossibility for computers to reference floating point values 100% accurately
    // at least by default, in languages like C. 

    // In languages like C, if you divide an integer by an integer, then you are returned an integer value.
    // If you statically divide integers together, the decimal places are thrown away.
    // Example:
    //  int 2 / int 3 == 0
    // Because the .666666 is dropped, as the values are integers. This is called truncation. 
    // To get around this, you can type the x and y variables to be processed as (floats).
}