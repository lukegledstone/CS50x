#include <stdio.h>


// This allows for the meow function to be loaded at the top of the file, so that the
// meow functiom can be placed at the top of the code, without raising an exception
// due to the fact that meow() is referenced before it is declared. 
// This is known as a prototype. 
// The semi-colon on the end defines that this function declaration is not dealt with 
// yet and is instead referenced further down in the code. 
void meow(int);

int main(void)
{
    meow(2);

    // Loops in C
    
    // Loop forever:

    // while (1)
    // {
    //     printf("Print forever\n");
    // }

    // Loop 3 times
    // Build a machine that does something a number of times
    int i = 0;
    while (i < 3)
    {
        printf("Print meow in the while loop. \n");
        i++;
    }

    // Doing a loop so many times with a for loop
    // Worth noting that the 'i' variable only exists within the 'if' statement so cannot be referenced elsewhere. SCOPE. 
    for (int i = 0; i < 3 ; i++)
    {
        printf("Print meow in the for loop. \n");
    }
}

// MEOW FUNCTION
// How to create a MEOW function.
    // meow is the name of the function
    // meow(int n) tells the function that it expects an integer as the input, which can be refered to as 'n' within the func.
    // the VOID before meow(int n) tells the function that it doesn't return anything. 
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

// Libraries in C contain functions like the above which are used as 'small programs' in the code.
// Header files in C contain the prototypes of these functions, like at the top of this file for the 
// meow() function, that allow the compiler to know what functions are available to it. Almost like 
// a menu for available functions. 