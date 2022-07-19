#include <cs50.h>
#include <stdio.h>

int void(main)
{
    // Prompt user to agree
    char c = get_char("Do you agree? (Y/N): ");

    // Check whether user agreed.
    if (c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n')
    {
        printf("Not agreed.\n");
    }
}