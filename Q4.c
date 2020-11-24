#include <stdio.h> // header files
int main()
{
    int integer, i; // delcare some variables 
    printf("Enter any integer- \n "); // ask user to enter any integer to calculate multiplication table
    scanf("%d", &integer); // read in the integer
    for (i = 1; i <= 10; ++i)
    {
        printf("%d * %d = %d \n", integer, i, integer * i); // display the table
    }
    return 0;
}
