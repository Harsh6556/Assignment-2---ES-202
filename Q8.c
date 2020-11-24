// C program to find frequency of each digit in a number
#include <stdio.h> // header files
#define FREQ 10 // constant

int main()
{   /* declare some variables */
    int num, n, i, last;
    int freq[FREQ];

    printf("Enter any number - \n "); // ask user input
    scanf("%d", &num); // read in user input

    for(i=0; i<FREQ; i++)
    {
        freq[i] = 0; // initializing frequency array with 0
    }

    n = num; // copying the value

    while(n != 0) // loop until n becomes 0
    {
        last = n % 10; // extract last digit
        n = n/10; // remove the last digit
        freq[last]++; // increment frequency array with 1
    }
    printf("Frequency of each digit in %d is: \n", num); 
    for(i=0; i<FREQ; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]); // print frequency of each digit
    }
    return 0;
}
