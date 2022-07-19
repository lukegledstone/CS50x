#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    } 
    while (n < 1);
    // "Do while" loop.
    // Checks user input first (does get_int("Width: ") first to get user input), 
    // then checks if n is greater than 1 (and the human has co-operated.)

    // For each row:
    for (int i = 0; i < n; i++)
        {
            // For each column:
            for (int j = 0; j < n; j++)
            {
                // Print a brick
                print("#")
            }
            // Move to the next row
            printf("\n");
        }
    // Creates a length of "?" as long as the user input from the first 'do-while' loop.
}   