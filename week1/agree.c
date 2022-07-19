#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? (Y/N): ");

    // Check whether user agreed.
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}

// In C, the way to check for 'or' is via two pipes - ||
// The way to check for 'and' is via two ampersands - &&

// Because the single character is being used, single quotes are required for the 'y' and 'N'. 
// If it was a string data type, even if it was a single character, then "y" and "N" would be required.