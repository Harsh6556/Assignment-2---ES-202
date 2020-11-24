#include <stdio.h> // header files
#include <math.h> // header files

    int main()
    {
    int num, first, last, dig; // declare some vriables
    
    printf("Enter any number- \n "); // ask user input
    scanf("%d", &num); // read in user input

    last = num % 10;  // extract the last digit  
    dig = (int)log10(num); // extract total number of digits - 1
    first = (int)(num / pow(10, dig)); // extract first digit

    printf("First digit is %d\n", first); // display the first digit
    printf("Last digit is %d\n", last); // display the laat digit

    return 0;
}