// C program to swap first and last digits of a number
#include <stdio.h> // header files
#include <math.h> // header files

int main()
{
    int n, swap; // declare some variables
    int first, last,dig; // declare some variables

    printf("Enter any number: "); // ask user input
    scanf("%d", &n); // read in user input

    last  = n % 10; // extract the last digit
    dig   = (int)log10(n); // find total number of digit - 1 
    first = (int)(n / pow(10, dig)); // extract the first digit 
    /* swap technique to swap first and last digits of a number */
    swap  = last;
    swap *= (int) pow(10, dig);
    swap += n % ((int) pow(10, dig));
    swap -= last;
    swap += first;

    printf("Original number is -  %d \n", n); // display the original number
    printf("Number after swapping first and last digit is - %d", swap); // display the result after swapping

    return 0;
}
