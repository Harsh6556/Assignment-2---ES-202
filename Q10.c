// C program to print ASCII values of all characters
#include <stdio.h> // header files
int main()
{
    int i; // declare some variables
    
    for(i=0; i<=255; i++) // loop from 0 to 255
    {
        printf("ASCII value of character %c = %d\n", i, i); // print the ASCII values
    }
    return 0;
}