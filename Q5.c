// C program to count number of digits in a number
#include <stdio.h> // header files
int main()
{
    int n, c = 0; // declare some variables
    
    printf("Enter any integer- \n "); // ask for user input
    scanf("%d", &n); // read in user input
 
    while (n != 0) // iterate until n becomes 0
    {
        n /= 10; // remove last digit from n   
        c++;     // increase counter value by 1
    }

    printf("Number of digits: %d", c); // display the result
}
